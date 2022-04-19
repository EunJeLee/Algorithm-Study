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


int main(){
  FASTIO()
  int ans = 0;
  int a = 5;
  while(a--){
    int temp;
    cin >> temp;
    ans += temp;
    v.pb(temp);
  }

  sort(v.begin(), v.end());
  cout << ans /5 << endl << v[2] << endl;

  return 0;
}
