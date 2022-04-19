#include <iostream>

using namespace std;

int main(){
  int m, n ,l;
  cin >> m >> n >> l;

  while(1){
    if(l > 0){
      if(m <= n){
        m++;
        l--;
      }
      else{
        n++;
        l--;
      }
    }
    if(l == 0) break;
  }
  if(m >= n) cout << 2*n << "\n";
  else if(m < n) cout << 2*m << "\n";

  return 0;
}
