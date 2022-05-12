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

int n, m;
int board[1001][1001];
int visited[1001][1001][2];
int dist[1001][1001][2];
string s[1001];
queue<pair<pair<int, int>, int>> q; // y좌표, x좌표, 벽 부순 여부
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};

int bfs(){
  visited[0][0][0] = true;
  q.push({{0, 0}, 0});

  while(!q.empty()){
    int y = q.front().first.first;
    int x = q.front().first.second;
    int check = q.front().second;
    q.pop();

    if(y == n-1 && x == m-1){
      return dist[y][x][check];
    }

    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];

      if(ny >= 0 && nx >= 0 && ny < n && nx < m){

          if(board[ny][nx] && !check){ // 벽인데 아직 뚫지 않았다면
            visited[ny][nx][1] = 1;
            dist[ny][nx][1] = dist[y][x][0] + 1;
            q.push({{ny, nx}, 1});
          }
          if(!board[ny][nx] && !visited[ny][nx][check]){ // 길이면서 방문하지 않았다면
            visited[ny][nx][check] = 1;
            dist[ny][nx][check] = dist[y][x][check] + 1;
            q.push({{ny, nx}, check});
          }

      }
    }
  }
  return -1;

}


int main(){
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    cin >> s[i];
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      board[i][j] = s[i][j] - '0';
    }
  }

  int ans = bfs();

  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j < m; j++){
  //     cout << dist[i][j][1] << " ";
  //   }cout << endl;
  // }

  if(ans == -1) cout << -1 << endl;
  else cout << ans+1 << endl;



  return 0;
}
