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
char arr[16];
char ans[16];
int isused[16];

string strchk = "aeiou";

bool check(char* str){
  int cnt = 0;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < 5; j++){
      if(strchk[j] == str[i]) cnt++;
    }
  }
  if(cnt >= 1 && m - cnt >= 2) return true;
  return false;
}

void bktk(int k){
  if(k == m && check(ans)){
    for(int i = 0; i < m; i++){
      cout << ans[i];
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
  cin >> m >> n;
  for(int i = 1; i <= n; i++) cin >> arr[i];
  sort(arr+1, arr+n+1);
  bktk(0);


  return 0;
}
