#include <iostream>

using namespace std;


#define lli long long
lli a, b, c;

lli f(lli x, lli y){
  if(y == 0) return 1;
  if(y % 2 == 1)return (f(x, y-1) *x)%c;
  else{
    lli n = f(x, y/2);
    return (n*n)%c;
  }
}

int main(){
  cin >> a >> b >> c;
  cout << f(a, b) << "\n";


  return 0;
}
