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
#define lli long long

using namespace std;
int psum[1025][1025] = {0,};
int v[1025][1025] = {0, };

void solve(){
  int n, m;
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      int temp;
      cin >> temp;
      v[i+1][j+1] = temp;
      psum[i+1][j+1] = psum[i][j+1] + psum[i+1][j] - psum[i][j] + temp;
    }
  }

  for(int i = 0; i < m; i++){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << psum[x2][y2] - psum[x1-1][y2] - psum[x2][y1-1] +psum[x1-1][y1-1] << endl;
  }
}



int main(){
  FASTIO()
  solve();

  return 0;
}
