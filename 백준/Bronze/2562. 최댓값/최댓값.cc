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

vector<pair<int ,int>> v;

int main(){
  FASTIO()
  for(int i = 0; i < 9; i++){
    int temp;
    cin >> temp;
    v.pb({temp, i+1});
  }
  sort(v.begin(), v.end());

  cout << v[8].first << endl << v[8].second << endl;

  return 0;

}
