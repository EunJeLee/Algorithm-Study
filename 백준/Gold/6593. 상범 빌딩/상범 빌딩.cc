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

int L, R, C, ans_y, ans_x;
char board[901][31];
int dist[901][31];
bool isvisited[901][31];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};



int bfs(int yy, int xx){
  queue<pair<pair<int, int>, int>> q;
  memset(isvisited, false, sizeof(isvisited));
  memset(dist, 0, sizeof(dist));

  q.push({{yy, xx}, yy/R}); // 열, 행, 층
  isvisited[yy][xx] = true;

  while(!q.empty()){
    int y = q.front().first.first;
    int x = q.front().first.second;
    int z = q.front().second;
    if(y == ans_y && x == ans_x){
      return dist[y][x];
    }
    q.pop();

    int uy = y + R;
    int downy = y - R;
    if(uy >= 0 && uy < L*R){
      if(board[uy][x] != '#' && !isvisited[uy][x]){
        isvisited[uy][x] = true;
        dist[uy][x] = dist[y][x] + 1;
        q.push({{uy, x}, uy/R});
      }
    }
    if(downy >= 0 && downy < L*R){
      if(board[downy][x] != '#' && !isvisited[downy][x]){
        isvisited[downy][x] = true;
        dist[downy][x] = dist[y][x] + 1;
        q.push({{downy, x}, downy/R});
      }
    }

    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];

      if(ny >= 0 && nx >= 0 && ny < L*R && nx < C && ny/R == z){
        if(!isvisited[ny][nx] && board[ny][nx] != '#'){
          isvisited[ny][nx] = true;
          dist[ny][nx] = dist[y][x] + 1;
          q.push({{ny, nx}, ny/R});
        }
      }
    }

  }
  return -1;
}



int main(){
  while(1){
    cin >> L >> R >> C;
    if(L == 0 && R == 0 && C == 0) break;
    else{
      int x, y;
      string s[L*R+1];
      for(int i = 0; i < L*R; i++){
        cin >> s[i];
      }
      for(int i = 0; i < L*R; i++){
        for(int j = 0; j < C; j++){
          board[i][j] = s[i][j];
          if(s[i][j] == 'S'){
            y = i;
            x = j;
          }if(s[i][j] == 'E'){
            ans_y = i;
            ans_x = j;
          }
        }
      }

      int ans = bfs(y, x);

      if(ans == -1) cout << "Trapped!\n";
      else{
        cout << "Escaped in "<< ans << " minute(s).\n";
      }
    }
  }


  return 0;
}
