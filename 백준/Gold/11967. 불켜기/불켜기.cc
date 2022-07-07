#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
// #include <cstdlib>
#define endl '\n'

using namespace std;

int N, M;
vector<pair<int, int>> board[101][101];
bool visited[101][101];
bool ans[101][101];

queue<pair<int, int>> q;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};


void input(){

  int x, y, a, b;
  cin >> N >> M;

  for(int i = 0; i < M; i++){
    cin >> y >> x >> a >> b;
    board[y][x].push_back({a, b});
  }
}

void solve(){
  visited[1][1] = true;
  ans[1][1] = true;
  q.push({1, 1});

  while(!q.empty()){
    int y = q.front().first;
    int x = q.front().second;
    q.pop();
    int size = board[y][x].size();
    for(int i = 0; i < size; i++){
      ans[board[y][x][0].first][board[y][x][0].second] = true;
      board[y][x].erase(board[y][x].begin());
      memset(visited, 0, sizeof(visited));
    }

    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];

      if(ny > 0 && nx > 0 && ny <= N && nx <= N){
        if(ans[ny][nx] && !visited[ny][nx]){
          visited[ny][nx]= true;
          q.push({ny, nx});
        }
      }
    }
  }
  int answ = 0;
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= N; j++){
      if(ans[i][j] == 1) answ += 1;
    }
  }
  cout << answ << endl;

}

int main(){
  input();
  solve();

  // for(int i = 1; i <= N; i++){
  //   for(int j = 1; j <= N; j++){
  //     cout << ans[i][j] << ' ';
  //   }cout << endl;
  // }

  return 0;
}
