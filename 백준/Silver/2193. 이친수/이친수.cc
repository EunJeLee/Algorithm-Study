#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#define MOD 10007
#define lli long long

using namespace std;

lli dp[95];

int main(){
    int n;
    cin >> n;

    dp[1]= 1;
    dp[2] = 1;


    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << endl;
    
}