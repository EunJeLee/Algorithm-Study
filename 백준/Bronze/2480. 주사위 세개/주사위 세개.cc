#include <iostream>
#include <vector>
#include <algorithm>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


using namespace std;
vector <int> v;

int main(){
  FASTIO()
  int a, b, c;
  cin >> a >> b >> c;
  if(a != b && a != c && b != c){
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    cout << v[2] * 100 << "\n";
  }
  else if(a == b && b == c){
    cout << 10000 + a * 1000 << "\n";
  }
  else {
    if(a == b) cout << 1000 + a * 100 << "\n";
    else if(a == c)cout << 1000 + a * 100 << "\n";
    else if(b == c) cout << 1000 + b * 100 << "\n";
  }


  return 0;
}
