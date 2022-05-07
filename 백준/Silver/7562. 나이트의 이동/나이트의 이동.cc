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

int board[301][301];
bool isvisited[301][301];
int dist[301][301];
int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

int x1, yz, x2, y2, n;


queue<pair<int, int>> q;

void bfs(){
  memset(isvisited, 0, sizeof(isvisited));
  memset(dist, 0, sizeof(dist));
  isvisited[yz][x1] = true;
  q.push({yz, x1});

  while(!q.empty()){
    int y = q.front().first;
    int x = q.front().second;
    q.pop();

    for(int i = 0; i < 8; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];

      if(ny >= 0 && nx >= 0 && ny < n && nx < n){
        if(!isvisited[ny][nx]){
          isvisited[ny][nx] = true;
          dist[ny][nx] = dist[y][x] + 1;
          q.push({ny, nx});
        }

      }
    }
  }
}


int main(){
  int T;
  cin >> T;
  while(T--){
    cin >> n;
    cin >> x1 >> yz >> x2 >> y2;
    bfs();

    cout << dist[y2][x2] << endl;

  }

  return 0;
}
