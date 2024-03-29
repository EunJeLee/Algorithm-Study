#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"

using namespace std;

int dp[1000005];

int main(){
    
    int n;
    cin >> n;

    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << endl;
    return 0;
}