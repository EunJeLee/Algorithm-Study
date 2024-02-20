#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <list>
#include <map>
#include <deque>
#define endl "\n"
#define MOD 10007
#define mp make_pair
#define pb push_back

using namespace std;

void solve(){
    char board[11][11];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            board[i][j] = '#';
        }
    }

    for(int i = 1; i < n -1; i++){
        for(int j = 1; j < n-1; j++){
            board[i][j] = 'J';
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j];
        }
        cout << endl;
    }
   
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
        if(t > 0)cout << endl;
    }
}
