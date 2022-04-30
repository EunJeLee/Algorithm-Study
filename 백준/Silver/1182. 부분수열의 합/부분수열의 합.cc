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

int arr[21];
int ans = 0;
int n, s;
bool isused[21];
int pre = -1;

void bktk(int k, int sum){
  sum += arr[k];
  if(k >= n) return;

  if(s == sum) ans++;

    bktk(k+1, sum-arr[k]);
    bktk(k+1, sum);

}

int main(){
  FASTIO()
  cin >> n >> s;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  bktk(0, 0);

  cout << ans << endl;
  return 0;
}
