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
  int n;
  cin >> n;

  int a = 0, b = 0;
  for(int i = 0; i < n; i++){
    int temp;
    cin >> temp;

    a += temp / 30 + 1;
    b += temp / 60 + 1;
  }

  if(a*10 == b*15){
    cout << "Y M " << a*10 << endl;
  }
  else if(a*10 > b*15){
    cout << "M " << b*15 << endl;
  }
  else{
    cout << "Y " << a*10 << endl;
  }


  return 0;

}
