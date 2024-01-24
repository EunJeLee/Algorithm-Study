#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[10005];
int coin[105];

int main(){
    int n, k;
    

    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        cin >> coin[i];
    }

    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = coin[i]; j <= k; j++){
            dp[j] = dp[j] + dp[j - coin[i]];
        }
    }
    cout << dp[k] << endl;

    return 0;
}