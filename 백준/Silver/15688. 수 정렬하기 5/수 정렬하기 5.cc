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

bool compare(int i, int j){
  return j < i;
}

void solve(){
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int temp;
    cin >> temp;
    v.pb(temp);
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++){
    cout << v[i] << endl;
  }
}


int main(){
  FASTIO()
  solve();

  return 0;
}
