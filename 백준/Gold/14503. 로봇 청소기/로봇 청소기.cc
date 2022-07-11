#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
#define endl '\n'

using namespace std;

int N, M, r, c, direction;
int board[51][51];
bool visited[51][51];
int dx[4] = {0, 1, 0, -1}; // 바라보는 곳 0:북, 1:동, 2:남, 3:서
int dy[4] = {-1, 0, 1, 0};
queue<pair<pair<int, int>, int>> q;

void input(){
  cin >> N >> M;
  cin >> r >> c >> direction;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> board[i][j];
    }
  }
}

void solve(){
  visited[r][c] = true;
  q.push({{r,c}, direction});

  int count = 0;

  while(!q.empty()){
    int y = q.front().first.first;
    int x = q.front().first.second;
    int d = q.front().second;
    // cout << endl << y << " " << x << " " << d << endl;
    q.pop();

    int ny = y + dy[(d+3)%4];
    int nx = x + dx[(d+3)%4];

    if(ny >= 0 && nx >= 0 && ny < N && nx < M){
      if(!board[ny][nx] && !visited[ny][nx]){
        count = 0;
        visited[ny][nx] = true;
        // cout<< endl;
        // for(int i =0; i < N; i++){
        //   for(int j = 0; j <M; j++){
        //     cout << visited[i][j] << " ";
        //   }cout << endl;
        // }
        // cout << "현재 y, x, 보고있는 방향 : " << ny << " " <<  nx << " " <<(d+3)%4 << endl;
        // cout << endl;
        q.push({{ny, nx}, (d+3)%4});
      }
      else{

        // cout <<  "c ++ " << d << " " << (d+3)%4 << endl;
        if(count < 3){
          count++;
          q.push({{y, x}, (d+3)%4});
        }

        else{
          int ny = y + dy[((d+3)%4 + 2)%4];
          int nx = x + dx[((d+3)%4 + 2)%4];
          // cout << "count4 d is " << (d+1)%4 << " " << ((d+3)%4+2)%4 << endl;
          // cout << "next y and next x is " << ny << " " << nx << endl;
          if(board[ny][nx]) return;
          else{
            q.push({{ny, nx}, (d+3)%4});
            count = 0;
          }
        }
      }
    }

  }
  return;
}

int main(){
  input();
  solve();
  int ans = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      // cout << visited[i][j] << " ";
      if(visited[i][j]) ans++;
    }
    // cout << endl;
  }

  cout << ans << endl;

  return 0;
}
