#include <bits/stdc++.h>
#include <string.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define lli long long
#define cinFast() ios_base::sync_with_stdio(0); cin.tie(0);

lli mod = 1e9, dp[105][10][1<<10];

lli f(int r, int i, int cur){
    if(r == 0) return cur == (1<<10)-1;
    lli &ret = dp[r][i][cur];
    if(ret != -1) return ret;

    ret = 0;
    if(i < 9) ret += f(r-1,i+1,cur|(1<<(i+1)));
    if(i > 0) ret += f(r-1,i-1,cur|(1<<(i-1)));

    ret %= mod;
    return ret;
}

int main(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin >> n;

    lli ans = 0;
    for(int i=1; i<=9; i++){
        ans += f(n-1,i,1<<i);
        ans %= mod;
    }
    cout << ans;
}