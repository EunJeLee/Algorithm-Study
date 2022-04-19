#include <iostream>
#include <queue>
#include <vector>
#include <map>
#define endl "\n"

using namespace std;

int board[101][101];
int check[101][101];
queue<pair<int, int>> q;
vector<int> v;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};

int bfs(int n, int m){
  int count = 0;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      check[i][j] = 0;

  check[0][0] = 1;
  q.push({0, 0});

  while(!q.empty()){
    int y = q.front().first;
    int x = q.front().second;
    q.pop();

    for(int i = 0; i < 4; i++){
      int n_x = x + dx[i];
      int n_y = y + dy[i];

      if(n_x >= 0 && n_y >= 0 && n_x < m && n_y < n){
        if(check[n_y][n_x] == 0){
          if(board[n_y][n_x] == 0){
            check[n_y][n_x] = 1;
            q.push({n_y, n_x});
          }
          if(board[n_y][n_x] == 1){
            board[n_y][n_x] = 0;
            check[n_y][n_x] = 1;
            count++;
          }
        }
      }
    }
  }

  return count;
}

int main(){
  int n, m;
  int hour = 0;
  cin >> n >> m;


  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> board[i][j];
    }
  }
  while(1){
    int answer = bfs(n, m);
    if(!answer){
      cout << hour << endl << v.back() << endl;
      break;
    }
    else{
      v.push_back(answer);
      hour++;
    }

  }

  return 0;
}
