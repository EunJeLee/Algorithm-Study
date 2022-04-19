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
  for(int i = 0; i < 3; i++){
    int zeros = 0;

    for(int j = 0; j < 4; j++){
      int temp;
      cin >> temp;
      if(temp == 0)zeros++;
    }
    
    if(zeros == 0) cout << 'E' << endl;
    else if(zeros == 1) cout << 'A' << endl;
    else if(zeros == 2) cout << 'B' << endl;
    else if(zeros == 3) cout << 'C' << endl;
    else if(zeros == 4) cout << 'D' << endl;
  }

return 0;
}
