#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <string>
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <cstring>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

void solve(){
    
}

void input(){
  
}
int r, c;

int board[1005][1005];

int dp[1005][1005];


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    cin >> r >> c;

    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> board[i][j];
        }
    }


    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])+board[i][j];
        }
    }
    
    cout << dp[r][c] << endl;

 }
