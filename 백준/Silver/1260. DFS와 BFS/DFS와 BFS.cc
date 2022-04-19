#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> tree[1002];
bool check[1002];
bool check2[1002];
queue<int> q;

void dfs(int x){
  if(check[x])return;
  check[x] = true;
  cout << x << " ";
  for(int i = 0; i < tree[x].size(); i++){
    int y = tree[x][i];
    dfs(y);
  }
}

void bfs(int x){
  check2[x] = true;
  q.push(x);
  while(!q.empty()){
    int a = q.front();
    q.pop();
    cout << a << " ";
    for(int i = 0; i < tree[a].size(); i++){
      if(!check2[tree[a][i]] && tree[a][i]){ //여기 원리 정확히 파악
        q.push(tree[a][i]);
        check2[tree[a][i]] = true;
      }
    }
  }
}

int main(){
  int n, m, v;
  cin >> n >> m >> v;

  for(int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    tree[x].push_back(y);
    tree[y].push_back(x);
  }
  for(int i = 1; i < n + 1; i++){
    sort(tree[i].begin(), tree[i].end());
  }

  dfs(v);
  cout << "\n";
  bfs(v);
  cout << "\n";

}
