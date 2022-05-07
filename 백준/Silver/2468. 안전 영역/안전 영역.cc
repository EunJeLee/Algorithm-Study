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

int n;
int board[101][101];
bool isvisited[101][101];

queue<pair<int, int>> q;
vector<int> ans;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};

void bfs(int limit){
  memset(isvisited, false, sizeof(isvisited));
  int cnt = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(board[i][j] <= limit && !isvisited[i][j]){
        isvisited[i][j] = true;
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(board[i][j] > limit && !isvisited[i][j]){
        isvisited[i][j];
        q.push({i, j});

        while(!q.empty()){
          int y = q.front().first;
          int x = q.front().second;
          q.pop();

          for(int k = 0; k < 4; k++){
            int ny = y + dy[k];
            int nx = x + dx[k];

            if(ny >= 0 && nx >= 0 && ny < n && nx < n){
              if(board[ny][nx] > limit && !isvisited[ny][nx]){
                isvisited[ny][nx] = true;
                q.push({ny, nx});
              }
            }
          }
        }
        cnt++;
      }
    }
  }
  ans.pb(cnt);
}

int main(){
  cin >> n;
  int max = -1;
  int min = 101;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> board[i][j];
      if(board[i][j] > max) max = board[i][j];
      if(board[i][j] < min) min = board[i][j];
    }
  }

  for(int i = 0; i <= max; i++){
    bfs(i);
  }


    sort(ans.rbegin(), ans.rend());
    cout << ans[0] << endl;



  return 0;
}
