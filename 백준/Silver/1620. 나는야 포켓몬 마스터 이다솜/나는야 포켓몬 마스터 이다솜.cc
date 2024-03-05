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
  map<int, string> m;
  map<string, int> m2;
  // map<int, string>::iterator iter;

  int N, M;
  cin >> N >> M;

  for(int i = 0; i < N; i++){
    string s;
    cin >> s;
    m.insert(pair<int, string>(i+1, s));
    m2.insert(pair<string, int>(s, i+1));
  }

  for(int i = 0; i < M; i++){
    string t;
    cin >> t;

    if(isdigit(t[0])) cout << m[stoi(t)] << endl;
    else{
      // for(iter = m.begin(); iter != m.end(); iter++){
      //   if((iter -> second) == t) cout << (iter -> first) << endl;
      // } 완탐하면 시간 초과
      cout << m2[t] << endl;
    }
  }

  return 0;
}
