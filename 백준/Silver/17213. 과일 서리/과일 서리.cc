#include <iostream>

using namespace std;
long long a = 1, b = 1;
double combination(double n, double r){
    double a = 1, b = 1;
    for(int i = n; i > n-r; i--) a *= i;
    for(int i = r; i > 0; i--) b*= i;
    return a/b;
}

int main(){
  int n, m;
  cin >> n >> m;
  if(n-1 < m-n) cout << (int)combination(m-1, n-1) << "\n";
  else cout << (int)combination(m-1,m-n) << "\n";
  return 0;
}
