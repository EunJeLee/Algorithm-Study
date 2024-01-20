#include <iostream>
#include <algorithm>
#include <vector>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int dp[1000005];
int pre[1000005];


int main (){
    FASTIO();

    int n;
    cin >> n;
    
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    pre[2] = 1;
    pre[3] = 1;

    for(int i = 4; i <= n; i++){
        dp[i] = dp[i-1];
        pre[i] = i-1;

        if(i % 2 == 0 && dp[i] > dp[i/2]) {
            dp[i] = dp[i/2];
            pre[i] = i/2;
        }
        if(i % 3 == 0 && dp[i] > dp[i/3]) {
            dp[i] = dp[i/3];
            pre[i] = i/3;
        }
        dp[i] += 1;
    }

    cout << dp[n]<< endl;

    int result = n;

    while(result > 1){
         cout << result << " ";
         result = pre[result];
    }
    cout << result << endl;
 
}