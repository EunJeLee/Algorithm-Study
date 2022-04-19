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

int countt[10] = {0,};


int main(){
  FASTIO()
  int a, b, c;
  cin >> a >> b >> c;

  string mul = to_string(a * b * c);
  for(int i = 0; i < mul.length(); i++){
    int t = mul[i] - '0';
    countt[t]++;
  }
  for(int  i = 0; i < 10; i++){
    cout << countt[i] << endl;
  }


  return 0;
}
