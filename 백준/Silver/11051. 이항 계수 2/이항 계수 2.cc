#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <list>
#include <deque>
#define endl "\n"
#define MOD 10007

using namespace std;

int lcs[1005][1005];
stack<char> s;
int dp[1005][1005];

// n!
// r!*(n-r)!

int factorial(int n){
    if(n == 0) return 1;
    return n * factorial(n-1) % MOD;
}

int main(){
    int n, r;
    cin >> n >> r;

    for(int i = 1; i <= n; i++){
        dp[i][0] = 1;
        dp[i][i] = 1;
    }
    
    for(int i = 2; i <= n; i++){
        for(int j = 0; j <= r; j++){
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % MOD;
        }
    }

    cout << dp[n][r] << endl;    
    

    return 0;
}