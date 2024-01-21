#include <iostream>
#include <algorithm>
#include <vector>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;

int score[3][100005];
int dp[3][100005];

void solve(){
    int n;

    cin >> n;
    
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= n; j++){
            cin >> score[i][j];
        }
    }

    dp[1][1] = score[1][1];
    dp[2][1] = score[2][1];
    
    dp[1][2] = score[2][1] + score[1][2];
    dp[2][2] = score[1][1] + score[2][2];
    
    for(int i = 3; i <= n; i++){
        dp[1][i] = max(dp[2][i-1], dp[2][i-2]) + score[1][i];
        dp[2][i] = max(dp[1][i-1], dp[1][i-2]) + score[2][i];
    }

    cout << max(dp[1][n], dp[2][n]) << endl;
}


int main (){
    FASTIO();

    int n;
    cin >> n;
    
    while(n--){
        solve();
    }


}