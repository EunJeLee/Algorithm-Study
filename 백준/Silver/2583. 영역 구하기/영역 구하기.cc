#include <iostream>
#include <algorithm>
#include <memory.h>
#include <random>
#include <unordered_map>
#include <math.h>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <set>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define TC()          \
    int TEST_CASE;    \
    cin >> TEST_CASE; \
    for (int TEST_NUM = 1; TEST_NUM <= TEST_CASE; TEST_NUM++)

using namespace std;

int isvisited[101][101];
queue<pair<int, int>> q;
vector<int> ans;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int m, n, k;


void bfs(){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(!isvisited[i][j]){
        int block_size = 1;
        isvisited[i][j] = true;
        q.push({i, j});

        while(!q.empty()){
          int y = q.front().first;
          int x = q.front().second;
          q.pop();

          for(int k = 0; k < 4; k++){
            int ny = y + dy[k];
            int nx = x + dx[k];

            if(ny >= 0 && nx >= 0 && ny < n && nx < m){
              if(!isvisited[ny][nx]){
                block_size++;
                isvisited[ny][nx] = true;
                q.push({ny, nx});
              }
            }
          }
        }
        ans.pb(block_size);
      }

    }
  }

}

int main(){
  cin >> n >> m >> k;
  while(k--){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = n - y2; i < n - y1; i++){
      for(int j = x1; j < x2; j++){
        isvisited[i][j] = true;
      }
    }
  }
  bfs();

  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for(int i = 0; i < ans.size(); i++){
    cout << ans[i] << " ";
  }cout << endl;

  return 0;
}
