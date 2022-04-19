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
#include <typeinfo>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair

using namespace std;

int main(){
  FASTIO()
  vector<string> v;
  map<string, int> m;

  int N, M;
  string temp;
  int count = 0;
  cin >> N >> M;
  // 또 당연히 완탐은 시간초과
  // for(int i = 0; i < N; i++){
  //   cin >> tmp;
  //   v.pb(tmp);
  // }
  // for(int i = 0; i < M; i++){
  //   cin >> temp;
  //   for(int j = 0; j < N; j++){
  //     if(v[j] == temp) count++;
  //   }
  // }
  for(int i = 0; i < N; i++){
    cin >> temp;
    m.insert(pair<string, int>(temp, 1));
  }

  for(int i = 0; i < M; i++){
    cin >> temp;
    if(m[temp]) count++;
  }

  cout << count << endl;
  return 0;
}
