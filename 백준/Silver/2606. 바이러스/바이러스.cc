#include <iostream>
#include <vector>

using namespace std;
bool check[101];
vector<int> tree[101];
int n, m, c = 0;

void bfs(int x){
  if(check[x]) return;
  check[x] = true;
  c++;
  for(int i = 0; i < tree[x].size(); i++){
    int y = tree[x][i];
    bfs(y);
  }
}

int main(){
  cin >> n;
  cin >> m;
  for(int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    tree[x].push_back(y);
    tree[y].push_back(x);
  }

  bfs(1);
  cout << c-1 << "\n";

}
