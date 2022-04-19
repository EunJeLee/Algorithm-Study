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

stack<lli> s;

void solve(){
  int n;
  lli ans = 0;
  cin >> n;

  for(int i = 0;  i < n; i++){
    lli roof;
    cin >> roof;
    if(s.empty()){
      s.push(roof);
    }
    else{
      if(s.top() > roof){
        ans += s.size();
        s.push(roof);
      }
      else{
        lli chk = ans;
        while(s.size() > 1){
          s.pop();
          if(s.top() > roof){
            ans += s.size();
            s.push(roof);
            break;
          }
        }
        if(chk == ans){
          if(s.top() > roof){
            ans++;
            s.push(roof);
          }
          else{
            s.pop();
            s.push(roof);
          }
        }
      }
    }
  }

  cout << ans << endl;
}


int main(){
  FASTIO()
  solve();


  return 0;
}
