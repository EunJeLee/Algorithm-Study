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

using namespace std;

int n, m;
string s[101];
bool isvisited[101][101];
int board[101][101];
int dist[101][101];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

queue<pair<int, int>> q;

void bfs(int y, int x){
  isvisited[y][x] = true;
  q.push({y, x});

  while(!q.empty()){
    if(y == n-1 && x == m-1) return;
    int xx = q.front().second;
    int yy = q.front().first;
    q.pop();

    for(int i = 0; i < 4; i++){
      int ny = yy + dy[i];
      int nx = xx + dx[i];

      if(ny >= 0 && nx >= 0 && ny < n && nx < m){
        if(board[ny][nx] && !isvisited[ny][nx]){
          isvisited[ny][nx] = true;
          dist[ny][nx] = dist[yy][xx] + 1;
          q.push({ny, nx});
        }
      }
    }
  }


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


  bfs(0,0);
  cout << dist[n-1][m-1] + 1 << endl;
  return 0;
}
