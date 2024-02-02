#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#define MOD 10007
#define lli long long

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int dp[1005];
int num[1005];

int main(){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) cin >> num[i];

    for(int i = 0; i < n; i++){
        dp[i] = 1;
        for(int j = 0; j < i; j++){
            if(num[i] > num[j]) dp[i] = max(dp[i], dp[j]+1);
        }
    }
    
    sort(dp, dp+n);
    cout << dp[n-1] << endl;
    
}
