#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"

using namespace std;

int coin[105];
int dp[10005];

int main(){
    fill_n(dp, 10005, 10005);
    int n, k;

    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> coin[i];
    }

    dp[0]= 0;

    for(int i = 1; i <= n; i++){
        for(int j = coin[i]; j <= k; j++){
            dp[j] =  min(dp[j], dp[j-coin[i]]+1);
        }
    }
    dp[k] != 10005 ? cout << dp[k] << endl : cout << -1 << endl;
    
    return 0;
}