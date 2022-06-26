#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#define endl '\n'

using namespace std;

int N, M;
int board[301][301];
int diff[301][301];
bool visited[301][301];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};
int cnt = 0;
queue<pair<int, int>> q;

void input(){
  cin >> N >> M;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> board[i][j];
    }
  }
}

void solve(){
  while(1){
    cnt++;
    memset(diff, 0, sizeof(diff));
    memset(visited, false, sizeof(visited));
    for(int i = 0; i < N; i++){
      for(int j = 0; j < M; j++){
        if(board[i][j] > 0){

          for(int k = 0; k < 4; k++){
            int ny = i + dy[k];
            int nx = j + dx[k];
            if(ny >= 0 && nx >= 0 && ny <= N && nx <= M){
              if(board[ny][nx] == 0 && board[i][j] > 0){
                diff[i][j] += 1;
              }
            }
          }
        }
      }
    }

    for(int i = 0; i < N; i++){
      for(int j = 0; j < M; j++){
        if(board[i][j] < diff[i][j]) board[i][j] = 0;
        else board[i][j] -= diff[i][j];
      }
    }

    int glacier = 0;
    int flag = 0;

    for(int i = 0; i < N; i++){
      for(int j = 0; j < M; j++){
        if(board[i][j] > 0 && glacier == 0 && !visited[i][j]){
          glacier++;
          q.push({i, j});
          visited[i][j];

          while(!q.empty()){
            int y = q.front().first;
            int x = q.front().second;
            q.pop();

            for(int k = 0; k < 4; k++){
              int ny = y + dy[k];
              int nx = x + dx[k];
              if(ny >= 0 && nx >= 0 && ny <= N && nx <= M){
                if(!visited[ny][nx] && board[ny][nx] > 0){
                    visited[ny][nx] = true;
                    q.push({ny, nx});
                }
              }
            }
          }
        }
        else if(board[i][j] > 0 && glacier == 1 && !visited[i][j]){
          flag = 1;
          break;
        }
      }
      if(flag == 1) break;
    }
    if(glacier == 0){
        cout << 0 << endl;
        break;
    }
    else if(flag == 1){
      cout << cnt << endl;
      break;
    }
  }
}

int main(){
  input();
  solve();

  return 0;
}
