#include <iostream>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


using namespace std;

int parent[1000001]= {0};


int find_root(int x){
  if (x==parent[x]){
    return x;
  }
  else{
    int y = find_root(parent[x]);
    parent[x] = y;
    return y;
  }
}

void uniona(int a, int b){
  a = find_root(a);
  b = find_root(b);
  if(a != b) parent[b] = a;
}

int main(){
  FASTIO()
  int n, m;
  cin >> n >> m;

  for(int i = 0; i <= n; i++){
    parent[i] = i;
  }

  for(int i = 0; i < m; i++){
    int c, a, b;
    cin >> c >> a >> b;
    if(c == 0){
      uniona(a, b);
    }
    else{
      if(find_root(a) != find_root(b)) cout << "NO\n";
      else cout << "YES\n";

    }
  }



  return 0;
}
