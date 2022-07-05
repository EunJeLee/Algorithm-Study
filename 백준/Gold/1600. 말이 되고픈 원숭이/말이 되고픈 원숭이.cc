#include <iostream>
#include <queue>
#include <algorithm>
#define endl '\n'

using namespace std;
int K, W, H;
int board[201][201];
int dist[201][201][31];
bool visited[201][201][31];
queue<pair<pair<int ,int>, int>> q; // {{y_index, x_index}, use_horse_ability}

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int dhx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dhy[8] = {1, -1, 2, -2, 2, -2, 1, -1};



void input(){
  cin >> K >> W >> H;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> board[i][j];
    }
  }

}

void solve(){
  visited[0][0][0] = true;
  q.push({{0, 0}, 0});

  while(!q.empty()){
    int y = q.front().first.first;
    int x = q.front().first.second;
    int available = q.front().second;
    q.pop();

    if(y == H-1 && x == W-1){
      cout << dist[H-1][W-1][available] << endl;
      return;
    }

    if(available < K){
      for(int i = 0; i < 8; i++){
        int ny = y + dhy[i];
        int nx = x + dhx[i];

        if(ny >= 0 && nx >= 0 && ny < H && nx < W){
          if(!visited[ny][nx][available+1] && board[ny][nx] != 1){
            visited[ny][nx][available+1] = true;
            dist[ny][nx][available+1] = dist[y][x][available] + 1;
            q.push({{ny, nx}, available+1});
          }
        }
      }
    }

    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];

      if(ny >= 0 && nx >= 0 && ny < H && nx < W){
        if(!visited[ny][nx][available] && board[ny][nx] != 1){
          visited[ny][nx][available] = true;
          dist[ny][nx][available] = dist[y][x][available] + 1;
          q.push({{ny, nx}, available});
        }
      }
    }
  }
  cout << -1 << endl;
}

int main(){
  input();
  solve();

  return 0;
}
