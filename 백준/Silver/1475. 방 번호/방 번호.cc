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

int num[10] = {0,};

void buy_pad(){
  for(int i = 0; i < 9; i++){
    num[i]++;
  }
  num[6]++;
}

void solve(){

}


int main(){
  FASTIO()
  int n;
  int ans = 0;
  cin >> n;

  while(n != 0){
    int rest = n % 10;

    if(rest == 9) rest = 6;

    if(num[rest] > 0){
      num[rest]--;
    }
    else{
      buy_pad();
      ans++;
      num[rest]--;
    }
    n /= 10;
  }
  cout << ans << endl;

  return 0;

}
