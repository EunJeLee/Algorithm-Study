#include <iostream>
#include <algorithm>
#include <memory.h>
#include <random>
#include <unordered_map>
#include <math.h>
#include <string>
#include <cstring>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <set>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define INF 100

using namespace std;

int check[1001][1001];
int board[1001][1001];
int power[10];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int n, m;
queue<pair<pair<int, int>, int>> q;
queue<pair<pair<int, int>, int>> q1[10];
bool flagg = false;

void print_board(){
  cout << "board" << endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  cout << "check board" << endl;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << check[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

int find_num(int x){
  int cnt = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(board[i][j] == x) cnt++;
    }
  }
  return cnt;
}

void bfs(int k, int power){
  flagg = false;
  if(!q1[k].empty()){
    q = q1[k];
    while(!q1[k].empty()) q1[k].pop();
  }
  else if(q1[k].empty()){
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        if(board[i][j] == k) q.push({{i, j}, 0});
      }
    }
  }

  while(!q.empty()){
    int pos_y = q.front().first.first;
    int pos_x = q.front().first.second;
    int cost = q.front().second;
    q.pop();

    if(cost < power){
      for(int i = 0; i < 4; i++){
        int new_pos_x = pos_x + dx[i];
        int new_pos_y = pos_y + dy[i];
        if(new_pos_x >= 0 && new_pos_x < m && new_pos_y >= 0 && new_pos_y < n){
          if(board[new_pos_y][new_pos_x] == 0 && check[new_pos_y][new_pos_x] == 0){
            board[new_pos_y][new_pos_x] = k;
            check[new_pos_y][new_pos_x] = 1;
            q.push({{new_pos_y, new_pos_x}, cost+1});
            q1[k].push({{new_pos_y, new_pos_x}, 0});
            flagg = true;
          }
          // if(cost+1 == power) q1[k].push({{new_pos_y, new_pos_x}, 0});

        }
      }
    }
  }
}

int main(){
  FASTIO()
  int p;
  cin >> n >> m >> p;

  for(int i = 0; i < p; i++){
    int temp;
    cin >> temp;
    power[i+1] = temp;
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      char temp;
      cin >> temp;
      if(temp == '.'){
        board[i][j] = 0;
      }
      else if(temp == '#'){
        board[i][j] = INF;
      }
      else{
        board[i][j] = temp - '0';
      }
    }
}


  while(1){
    int flag = 0;
    int v[10] = {0};
    for(int i = 1; i <= p; i++){
      bfs(i, power[i]);
      if(flagg == 0) flag++;
    }
    if(flag == p) break;
  }

  for(int i = 1; i <= p; i++){
    printf("%d ", find_num(i));
  }
  printf("\n");
  return 0;
}
