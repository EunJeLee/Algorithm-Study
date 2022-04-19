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

int ans[1001];

void solve(){
  for(int i = 0; i < 10; i++){
    int temp;
    cin >> temp;
    ans[temp % 42] = 1;
  }
  int s = 0;
  for(int i = 0; i < 1000; i++){
    if(ans[i]) s++;
  }
  cout << s << endl;
}


int main(){
  FASTIO()
  solve();

  return 0;
}
