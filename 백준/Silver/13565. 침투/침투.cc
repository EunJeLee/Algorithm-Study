#include <iostream>
#include <queue>
#include <string>
#define endl "\n"

using namespace std;

int board[1001][1001];
int check[1001][1001] = {0, };
queue<pair<int, int>> q;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};


int bfs(int n, int m, int k){
    if(board[0][k] == 1)return 0;
    check[0][k] = 1;
    q.push({0, k});

    while(!q.empty()){
      int y = q.front().first;
      int x = q.front().second;
      if(y == n-1) return 1;
      q.pop();


      for(int j = 0; j < 4; j++){
        int n_x = x + dx[j];
        int n_y = y + dy[j];

        if(n_x >= 0 && n_x < m && n_y >= 0 && n_y < n){
          if(board[n_y][n_x] == 0 && check[n_y][n_x] == 0){
            check[n_y][n_x] = 1;
            q.push({n_y, n_x});
          }
        }
      }
    }
    return 0;
  }

int main(){
  int n, m;
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      scanf("%1d", &board[i][j]);
    }
  }

  for(int i = 0; i < m; i++){
    int answer = bfs(n, m, i);
    if(answer){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
