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

using namespace std;

int n, m;
int isused[9];
int arr[9];
int ans[9];

void bktk(int k){
  if(k == m){
    for(int i = 0; i < m; i++){
      cout << ans[i] << ' ';
    }
    cout << endl;
    return;
  }
  int prev = -1;
  for(int i = 1; i <= n; i++){
    if(prev != arr[i] && ans[k-1] <= arr[i]){
      ans[k] = arr[i];
      isused[i] = 1;
      prev = arr[i];
      bktk(k+1);
      isused[i] = 0;
    }
  }
}


int main(){
  FASTIO()
  cin >> n >> m;
  for(int i = 1; i <= n; i++) cin >> arr[i];
  sort(arr+1, arr+n+1);
  bktk(0);

  return 0;
}
