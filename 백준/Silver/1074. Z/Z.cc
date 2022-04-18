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

int cnt = 0;

long long z_square(int x, int r, int c){
  if(x == 1){
    return 1;
  }

  long long h = x / 2;
  if(r < h && c < h){ // 2사분면
    return z_square(h, r, c);
  }
  else if(r < h && c >= h){ // 1사분면
    return h*h + z_square(h, r, c-h);
  }
  else if(r >= h && c < h){ // 3사분면
    return 2*h*h + z_square(h, r-h, c);
  }
  else{ // 4사분면
    return 3*h*h + z_square(h, r-h, c-h);
  }


}

int main(){
  int n, r, c;
  cin >> n >> r >> c;
  cout << z_square(1<<n, r, c)-1 << endl;

  return 0;
}
