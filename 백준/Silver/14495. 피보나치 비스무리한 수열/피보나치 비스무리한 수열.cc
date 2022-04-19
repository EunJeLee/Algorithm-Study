#include <iostream>
using namespace std;

long long int dp[116];

long long cal(int n){
  if(n == 1 || n == 2 || n == 3){
    return 1;
  }
  if(dp[n] != 0){
    return dp[n];
  }
  return dp[n] = cal(n-1) + cal(n-3);
}

int main(){
  int n;
  cin >> n;

  cout << cal(n) << "\n";
  return 0;
}
