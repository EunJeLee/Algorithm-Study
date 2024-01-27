#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#define MOD 10007
#define lli long long

using namespace std;

lli dp[100005];
lli num[100005];

int main(){
    lli n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> num[i];
    }

    lli result = num[1];
    dp[1] = num[1];

    
    for(int i = 2; i <= n; i++){
        dp[i] = max(num[i], dp[i-1]+ num[i]);
        result = max(dp[i], result);
    }

    cout << result << endl;
    
}