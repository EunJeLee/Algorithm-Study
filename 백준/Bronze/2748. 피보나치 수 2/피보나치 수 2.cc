#include <iostream>
#include <vector>

using namespace std;

long long dp[90];

long long fibo(long x){
  if(x == 0)return 0;
  if(x == 1)return 1;
  if(dp[x] != 0)return dp[x];
  return dp[x] = fibo(x-1) + fibo(x-2);
}

int main(){
  int num;
  cin >> num;
  cout << fibo(num) << "\n";
}
