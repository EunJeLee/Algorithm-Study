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

void solve(){

}


int main(){
  FASTIO()
  int q;
  cin >> q;
  while(q--){
    string s1, s2;
    cin >> s1 >> s2;
    vector<char> s11(s1.begin(), s1.end());
    vector<char> s22(s2.begin(), s2.end());


    sort(s11.begin(), s11.end());
    sort(s22.begin(), s22.end());

    s11 == s22 ? cout << "Possible\n" : cout << "Impossible\n";

  }
  return 0;

}
