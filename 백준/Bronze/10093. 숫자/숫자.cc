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


int main(){
  FASTIO()
  unsigned lli a, b;
  cin >> a >> b;

  if(b < a){
    unsigned lli temp = a;
    a = b;
    b = temp;
  }
  if(a == b){
    cout << 0 << endl;
  }
  else if(b - a == 1){
    cout << 0 << endl;
  }
  else{
    cout << b - a - 1 << endl;
    for(lli i = a + 1; i < b; i++){
      cout << i << " ";
    }
    cout << endl;
  }


  return 0;
}
