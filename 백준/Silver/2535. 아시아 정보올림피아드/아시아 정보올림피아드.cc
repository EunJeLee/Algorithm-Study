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
deque<pair<int, pair<int, int>>> v;
int cnt[301] = {0};

bool comp(int i, int j){
  return i > j;
}

void solve(){
  int t;
  cin >> t;

  for(int i = 0; i < t; i++){
    int n, m, s;
    cin >> n >> m >> s;
    v.pb({s, {n, m}});
  }

  sort(v.rbegin(), v.rend());

  int check = 0;

  for(int i = 0; i < v.size(); i++){
    if(check == 3) break;
    if(cnt[v[i].second.first] < 2){
      check++;
      cnt[v[i].second.first]++;
      cout << v[i].second.first << " " << v[i].second.second << endl;
    }

  }
}


int main(){
  FASTIO()
  solve();

  return 0;
}
