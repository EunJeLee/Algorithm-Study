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

vector<int> v;

void solve(){

}


int main(){
  FASTIO()
  for(int i = 0; i < 20; i++){
    v.pb(i+1);
  }
  for(int i = 0; i < 10; i++){
    int a, b;
    cin >> a >> b;

    reverse(v.begin()+a-1, v.begin()+b);
  }
  for(int i = 0;  i < 20; i++){
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;

}
