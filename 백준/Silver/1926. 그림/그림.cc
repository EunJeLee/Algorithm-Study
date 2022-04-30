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

using namespace std;

int board[501][501];
bool isvisited[501][501];
int n, m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0 ,-1, 0, 1};

vector<int> v;
queue<pair<int, int>> q;

void bfs(){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(board[i][j] && !isvisited[i][j]){
        int board_num = 1;
        isvisited[i][j] = true;
        q.push({i, j});

        while(!q.empty()){
          int idy = q.front().first;
          int idx = q.front().second;
          q.pop();

          for(int k = 0; k < 4; k++){
            int ndy = idy + dy[k];
            int ndx = idx + dx[k];
            if(ndy >= 0 && ndy < n && ndx >= 0 && ndx < m){
              if(!isvisited[ndy][ndx] && board[ndy][ndx]){
                isvisited[ndy][ndx] = true;
                q.push({ndy, ndx});
                board_num++;
              }
            }
          }
        }
        v.pb(board_num);
      }
    }
  }

}

int main(){
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> board[i][j];
    }
  }

  bfs();

  sort(v.rbegin(), v.rend());

  if(v.empty()) cout << 0 << " " << 0 <<endl;
  else cout << v.size() << " " <<  v[0] << endl;

  return 0;
}
