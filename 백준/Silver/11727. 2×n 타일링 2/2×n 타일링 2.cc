#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#define MOD 10007

using namespace std;

int dp[1005];

int main(){
    int n;
    cin >> n;

    dp[1] = 1;
    dp[2] = 3;
    
    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i-1] + 2*dp[i-2]) % MOD; 
        
    }

    cout << dp[n] << endl;

    
}