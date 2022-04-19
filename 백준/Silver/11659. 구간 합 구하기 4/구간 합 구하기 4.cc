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
vector<int> v;
lli psum[100001] = {0,};

void solve(){
  int n, m;
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    lli temp;
    cin >> temp;
    psum[i+1] = psum[i] + temp;
  }

  for(int i = 0; i < m; i++){
    lli a, b;
    cin >> a >> b;
    cout << psum[b] - psum[a-1] << endl;
  }
}


int main(){
  FASTIO()
  solve();

  return 0;
}
