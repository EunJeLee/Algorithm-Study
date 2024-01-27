#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"

using namespace std;

int dp[505][505];

int main(){
    vector<int> v[505];

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++ ){
            int tmp;
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }
    
    for(int i = 0; i < n; i++){
        dp[n][i+1] = v[n][i];
    }


    for(int i = n-1; i >= 1; i--){
        for(int j = 0; j < i; j++){
            dp[i][j+1] = max(dp[i+1][j+1], dp[i+1][j+2]) + v[i][j];
        }
    }    

    cout << dp[1][1] << endl;
    
}