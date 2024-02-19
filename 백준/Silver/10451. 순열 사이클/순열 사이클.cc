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
    vector<int> v[1005];
    bool checked[1005] = {false};
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;

        v[i+1].pb(tmp);
    }

    int sum = 0;
    
    for(int i = 1; i <= n; i++){
        if(!checked[i]){
            sum++;
            checked[i] = true;

            int next = v[i][0];
            while(next != i){
                checked[next] = true;
                next = v[next][0];
           }
        }
    }

    cout << sum << endl;

}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
 
}
