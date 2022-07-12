#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#include <vector>
#define endl '\n'

using namespace std;
int N, a, b, M;
int v[101][101];
bool visited[101];
vector<int> root;
int cnt = 0;
bool flag = false;

void input(){
  cin >> N >> a >> b >> M;
  int x, y;

  for(int i = 0; i < M; i++){
    cin >> x >> y;
    v[x][y] = 1;
    v[y][x] = 1;
  }
}

void dfs(int x){
  if(visited[x]) return;
  visited[x] = true;
  for(int i = 1; i <= N; i++){
    if(v[x][i] && !visited[i]) {
      cnt++;
      if(i == b) {
        cout << cnt << endl;
        flag = true;
        return;
      }
      dfs(i);
    }
  }
  cnt--;

}




// }

int main(){
  input();

  dfs(a);
  if(!flag) cout << -1 << endl;


  return 0;
}
