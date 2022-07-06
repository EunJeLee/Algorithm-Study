#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string>
#define endl '\n'

using namespace std;
int N, M, K;
int board[1001][1001];
int visited[1001][1001][11];
int dist[1001][1001][11];
queue<pair<pair<int, int>, int>> q;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};

void input(){
  cin >> N >> M >> K;
  string s;
  for(int i = 0; i < N; i++){
    cin >> s;
    for(int j = 0; j < M; j++){
      board[i][j] = s[j] - '0';
    }
  }
}

void solve(){
  visited[0][0][0] = 1;
  q.push({{0, 0}, 0});

  while(!q.empty()){
    int y = q.front().first.first;
    int x = q.front().first.second;
    int k = q.front().second;
    q.pop();

    if(y == N-1 && x == M-1){
      cout << dist[y][x][k] + 1 << endl;
      return;
    }

    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];

      if(ny >= 0 && nx >= 0 && ny < N && nx < M){
        if(visited[ny][nx][k] == 0 && board[ny][nx] == 0){
          visited[ny][nx][k] = 1;
          dist[ny][nx][k] = dist[y][x][k] + 1;
          q.push({{ny, nx}, k});
        }
        else if(k < K && visited[ny][nx][k+1] ==0 && board[ny][nx] == 1) {
          visited[ny][nx][k+1] = 1;
          dist[ny][nx][k+1] = dist[y][x][k] + 1;
          q.push({{ny, nx}, k+1});
        }
      }
    }
  }
  cout << -1 << endl;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  input();
  solve();

  return 0;
}
