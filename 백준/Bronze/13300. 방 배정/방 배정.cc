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

int male[7];
int female[7];

void solve(){

}


int main(){
  FASTIO()
  int n, k;
  int ans = 0;
  cin >> n >> k;

  for(int i = 0; i < n; i++){
    int gender, grade;
    cin >> gender >> grade;
    if(gender == 1) male[grade]++;
    else female[grade]++;
  }

  for(int i = 1; i <= 6; i++){
    if(male[i] % k == 0){
      ans += male[i] / k;
    }
    else if(male[i] % k != 0){
      ans += male[i] / k + 1;
    }
    if(female[i] % k == 0){
      ans += female[i] / k;
    }
    else if(female[i] % k != 0){
      ans += female[i] / k + 1;
    }
  }

  cout << ans << endl;
  return 0;

}
