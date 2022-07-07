#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
#include <tuple>
#define endl '\n'

using namespace std;

int N, M, K;
int board[1001][1001];
bool visited[1001][1001][11];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};


// 결론 dist 배열이 있으면 안되고, 각각 queue에 들어가는 element에 Dist 값이 있어야한다.
queue<pair<pair<int, int>, tuple<int, int, bool>>> q; // <y좌표, x좌표> , <거리, 벽 부순 개수, 낮/밤>
                                               // 낮이면 true 밤이면 false
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
  visited[0][0][0] = true;
  q.push({{0,0}, {0, 0, true}});

  while(!q.empty()){
    int y = q.front().first.first;
    int x = q.front().first.second;
    int dist = get<0>(q.front().second);
    int k = get<1>(q.front().second);
    int time = get<2>(q.front().second);
    q.pop();




    if(y == N-1 && x == M-1){
      cout << dist + 1 << endl;
      return;
    }

    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];

      if(ny >= 0 && nx >= 0 && ny < N && nx < M){ // outBound check
        if(!visited[ny][nx][k] && !board[ny][nx]){ // 이동할 장소의 방문 x 및 벽이 없는지 확인
          visited[ny][nx][k] = true;
          q.push({{ny, nx}, {make_tuple(dist+1, k, !time)}});
        }
        else if(board[ny][nx] && !visited[ny][nx][k+1] && k < K){
          if(time){
            visited[ny][nx][k+1] = true;
            q.push({{ny, nx}, {make_tuple(dist+1, k+1, !time)}});
          }
          else{
            q.push({{y, x}, {make_tuple(dist+1, k, !time)}});
          }
        }
      }
    }
  }
  cout << -1 << endl;
  return;
}

int main(){
  input();
  solve();

  return 0;
}
