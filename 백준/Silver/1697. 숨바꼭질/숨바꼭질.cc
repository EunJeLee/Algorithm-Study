#include <iostream>
#include <queue>
#include <map>
#define endl "\n"
#define pb push_back
#define mp make_pair

using namespace std;
int board[200001];
queue<pair<int, int>> q;
int ans = 0;

void bfs(int n, int k){
  q.push({n, 0});
  while(!q.empty()){
    int c_pos = q.front().first;
    int c_dist = q.front().second;

    if(c_pos == k){
      ans = c_dist;
      return;
    }

    q.pop();

    int n_pos;
    n_pos = c_pos - 1;
    int n_dist = c_dist + 1;
    if(board[n_pos] == 0 && n_pos >= 0 && n_pos <= 100000){
      board[n_pos] = n_dist;
      q.push({n_pos, n_dist});
    }
    n_pos = c_pos + 1;
    if(board[n_pos] == 0 && n_pos >= 0 && n_pos <= 100000){
      board[n_pos] = n_dist;
      q.push({n_pos, n_dist});
    }
    n_pos = c_pos * 2;
    if(board[n_pos] == 0 && n_pos >= 0 && n_pos <= 100000){
      board[n_pos] = n_dist;
      q.push({n_pos, n_dist});
    }
  }
}

int main(){
  int n, k;
  cin >> n >> k;
  bfs(n, k);

  cout << ans << endl;
  return 0;
}
