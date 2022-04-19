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

stack<int> s;
vector<int> v;
int ans[1000001];
int n;


void solve(){
  cin >> n;
  for(int i = 0; i < n; i++){
    int temp;
    cin >> temp;
    v.pb(temp);
  }
  s.push(v[n-1]);
  ans[n-1] = -1;

  for(int i = n-2; i >= 0; i--){
    if(v[i] < s.top()){
      ans[i] = s.top();
      s.push(v[i]);
    }
    else{
      int check = 0;
      while(!s.empty()){
        s.pop();
        if(s.empty()){
          s.push(v[i]);
          break;
        }
        if(v[i] < s.top()){
          ans[i] = s.top();
          s.push(v[i]);
          check = 1;
          break;
        }
      }
      if(!check){
        ans[i] = -1;
        s.push(v[i]);
      }
    }
  }
}


int main(){
  FASTIO()
  solve();

  for(int i = 0; i < n; i++) cout << ans[i] << " ";
  cout << endl;

  return 0;
}
