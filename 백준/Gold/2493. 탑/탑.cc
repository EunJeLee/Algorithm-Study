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

stack<pair<int, int>> s;
vector<pair<int, int>> v;

int ans[500001];


int main(){
  FASTIO()
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int temp;
    cin >> temp;
    if(s.empty()){
      s.push({temp, i+1});
    }
    else{
      if(s.top().first < temp){
        if(s.size() == 1){
          s.pop();
          s.push({temp, i+1});
        }
        else{
          while(!s.empty()){
            s.pop();
            if(s.empty()){
              s.push({temp, i+1});
              break;
            }

            if(s.top().first > temp){
              ans[i+1] = s.top().second;
              s.push({temp, i+1});
              break;
            }
          }
        }
      }
      else if(s.top().first > temp){
        ans[i+1] = s.top().second;
        s.push({temp, i+1});
      }
    }
  }



  for(int i = 1; i <= n; i++){
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;

}
