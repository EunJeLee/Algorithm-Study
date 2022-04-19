#include <iostream>
#include <algorithm>

using namespace std;

int dp[1000001];

int min_count(int n){
  if(n == 1){
    return 0;
  }
  if(dp[n] != 0){
    return dp[n];
  }
  if(n % 2 == 0 && n % 3 == 0){
    return dp[n] = 1 + min(min_count(n/2),min_count(n/3));
  }
  else if((n % 3 == 0) && (n % 2 != 0)){
    return dp[n] = 1 + min(min_count(n-1), min_count(n/3));
  }
  else if((n % 2 == 0) && (n % 3 != 0)){
    return dp[n] = 1 + min(min_count(n-1), min_count(n/2));
  }
  else if((n % 2 != 0) && (n % 3 != 0)){
    return dp[n] = 1+ min_count(n-1);
  }
}


int main(){
  int x;
  cin >> x;

  cout << min_count(x) << "\n";

  return 0;
}
