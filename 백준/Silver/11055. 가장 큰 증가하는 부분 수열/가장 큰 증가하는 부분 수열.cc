#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#define MOD 10007
#define lli long long

using namespace std;

lli dp[1005];
lli num[1005];

bool compare(int a, int b){
    return a > b;
   }

int main(){
    lli n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> num[i];
    }

   for(int i = 1; i <= n; i++){
        dp[i] = num[i];
   }
    int max = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            if(num[i] > num[j] && dp[i] < dp[j] + num[i]) dp[i] = dp[j] + num[i];
            if(dp[i] > max) max = dp[i];
        }
    }

    sort(dp+1, dp+n+1, compare);

    cout << dp[1] << endl;
}
