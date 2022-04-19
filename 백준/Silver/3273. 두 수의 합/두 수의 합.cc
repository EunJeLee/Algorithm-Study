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

int arr[2000001]= {0,};

vector<int> v;


int main(){
  FASTIO()
  int n;
  cin >> n;
  int ans = 0;

  for(int i = 0; i < n; i++){
    int temp;
    cin >> temp;
    v.pb(temp);
    arr[temp] = 1;
  }

  int x;
  cin >> x;
  for(int i = 0; i < v.size(); i++){
    if(v[i] < x){
      if(arr[x-v[i]] == 1){
        if(v[i] != x-v[i]){
          ans++;
          arr[v[i]] = 0;
          arr[x-v[i]] = 0;
        }
      }
    }
  }
  cout << ans << endl;

  return 0;

}
