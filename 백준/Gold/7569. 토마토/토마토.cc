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

int n, m, h;
int board[10001][101];
bool isvisited[10001][101];
int dist[10001][101];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

queue<pair<pair<int, int>, int>> q;

bool ripe(){
  int chk1, chk2;
  for(int i = 0; i < n*h; i++){
    for(int j = 0; j < m; j++){
      if(board[i][j] == 0) return false;
    }
  }
  return true;
}

void initial(){
  for(int i = 0; i < n*h; i++){
    for(int j = 0; j < m; j++){
      if(board[i][j] == 1){
        q.push({{i, j}, i/n});
        isvisited[i][j] = true;
      }
    }
  }
}
void bfs(){
  while(!q.empty()){
    int y = q.front().first.first;
    int x = q.front().first.second;
    int z = q.front().second;
    q.pop();

    int uy = y + n;
    int downy = y - n;
    if(uy >= 0 && uy < h*n){
      if(board[uy][x] == 0 && !isvisited[uy][x]){
        board[uy][x] = 1;
        isvisited[uy][x] = true;
        dist[uy][x] = dist[y][x] + 1;
        q.push({{uy, x}, uy/n});
      }
    }
    if(downy >= 0 && downy < h*n){
      if(board[downy][x] == 0 && !isvisited[downy][x]){
        board[downy][x] = 1;
        isvisited[downy][x] = true;
        dist[downy][x] = dist[y][x] + 1;
        q.push({{downy, x}, downy/n});
      }
    }

    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];
      if(ny >= 0 && nx >= 0 && ny < n*h && nx < m){
        if(board[ny][nx] == 0 && !isvisited[ny][nx] &&  ny/n == z){
          board[ny][nx] = 1;
          isvisited[ny][nx] = true;
          dist[ny][nx] = dist[y][x] + 1;
          q.push({{ny, nx}, ny/n});
        }
      }
    }
  }
}

int day(){
  int pivot = -1;
  for(int i = 0; i < n*h; i++){
    for(int j = 0; j < m; j++){
      if(dist[i][j] > pivot) pivot = dist[i][j];
    }
  }
  return pivot;
}

int main(){
  cin >> m >> n >> h;

  for(int i = 0; i < n * h; i++){
    for(int j = 0; j < m; j++){
      cin >> board[i][j];
    }
  }

  initial();
  bfs();

  if(!ripe()) cout << -1 << endl;
  else cout << day() << endl;
  return 0;
}
