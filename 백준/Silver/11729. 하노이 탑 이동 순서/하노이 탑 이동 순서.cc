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

void hanoi(int n, int start, int dest, int passby){
  if(n == 1) cout << start << " " << dest << endl;
  else {
    hanoi(n-1, start, passby, dest);
    cout << start << " " << dest << endl;
    hanoi(n-1, passby, dest, start);
  }
}

int main(){
  int k;
  cin >> k;

  cout <<  (1 << k) - 1 << endl;

  hanoi(k, 1, 3, 2);

  return 0;
}
