#include <iostream>
#include <vector>

using namespace std;

long long dp[101];

long long triangle(int n){
  if(n >= 1 && n <= 3){
    return 1;
  }
  if(n==4 || n== 5){
    return 2;
  }
  if(dp[n] != 0){
    return dp[n];
  }
  return dp[n] = triangle(n-1) + triangle(n-5);

}



int main(){
  int T, N;
  cin >> T;

  for(int i = 0; i < T; i++){
    cin >> N;
    cout << triangle(N) << "\n";
  }
  return 0;
}
