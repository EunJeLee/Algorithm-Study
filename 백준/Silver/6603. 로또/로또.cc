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

int n = 1;
int isused[9];
int arr[9];
int ans[9];

void bktk(int k){
  if(k == 6){
    for(int i = 0; i < 6; i++){
      cout << ans[i] << ' ';
    }
    cout << endl;
    return;
  }
  for(int i = 1; i <= n; i++){
    if(!isused[i] && ans[k-1] < arr[i]){
      ans[k] = arr[i];
      isused[i] = 1;
      bktk(k+1);
      isused[i] = 0;
    }
  }
}


int main(){
  FASTIO()

  while(n){
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    bktk(0);
    cout << endl;
  }


  return 0;
}
