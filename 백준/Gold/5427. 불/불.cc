#include <iostream>
#include <algorithm>
#include <memory.h>
#include <random>
#include <unordered_map>
#include <math.h>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <set>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define TC()          \
    int TEST_CASE;    \
    cin >> TEST_CASE; \
    for (int TEST_NUM = 1; TEST_NUM <= TEST_CASE; TEST_NUM++)

using namespace std;
string s[1001];
bool isvisited[1001][1001] = {0,};
char board[1001][1001] = {0,};
int dist[1001][1001] = {0, };
bool firevisited[1001][1001] = {0,};
int firedist[1001][1001] = {0,};

queue<pair<int, int>> fire, q;

int n, m, j_x, j_y;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
vector<int> ans;

void firespread(){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      firevisited[i][j] = false;
      firedist[i][j] = 0;
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(board[i][j] == '*'){
        firevisited[i][j] = true;
        fire.push({i, j});
      }
    }
  }
  while(!fire.empty()){
    int y = fire.front().first;
    int x = fire.front().second;
    fire.pop();

    for(int k = 0; k < 4; k++){
      int ny = y + dy[k];
      int nx = x + dx[k];
      if(ny >= 0 && nx >= 0 && ny < n && nx < m){
        if((board[ny][nx] == '.' || board[ny][nx] == '@') && !firevisited[ny][nx]){
          firevisited[ny][nx] = true;
          firedist[ny][nx] = firedist[y][x] + 1;
          fire.push({ny, nx});
        }
      }
    }
  }
}


void person_move(int y, int x){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      isvisited[i][j] = false;
      dist[i][j] = 0;
    }
  }
  isvisited[y][x] = true;
  q.push({y, x});

  while(!q.empty()){
    int y = q.front().first;
    int x = q.front().second;
    q.pop();

    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];
      if(ny >= 0 && nx >= 0 && ny < n && nx < m){
        if(board[ny][nx] == '.' && !isvisited[ny][nx]){
          isvisited[ny][nx] = true;
          dist[ny][nx] = dist[y][x] + 1;
          q.push({ny, nx});
        }
      }
    }
  }
}

void solve(){
  if(j_y == 0 || j_y == n-1 || j_x == 0 || j_x == m-1) cout << 1 << endl;
  else{
    firespread();
    person_move(j_y, j_x);


    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(i == 0 || i == n-1 || j == 0 || j == m-1){
          if((dist[i][j] < firedist[i][j] && firevisited[i][j] && isvisited[i][j]) || (!firevisited[i][j] && isvisited[i][j] )) ans.push_back(dist[i][j]+1);
        }
      }
    }

    if(ans.empty()) cout << "IMPOSSIBLE\n";
    else{
      sort(ans.begin(), ans.end());
      cout << ans[0] << endl;
    }
  }
  ans.clear();
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      board[i][j] = 0;
      isvisited[i][j] = 0;
      dist[i][j] = 0;
      firedist[i][j] = 0;
      firevisited[i][j] = 0;
    }
  }
}


int main(){
  int T;
  cin >> T;
  for(int k = 0; k < T; k++){
    cin >> m >> n;

    for(int i = 0; i < n; i++) cin >> s[i];

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(s[i][j] == '@'){
          j_x = j;
          j_y = i;
        }
      }
    }
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        board[i][j] = s[i][j];
      }
    }
    solve();

  }
  return 0;
}
