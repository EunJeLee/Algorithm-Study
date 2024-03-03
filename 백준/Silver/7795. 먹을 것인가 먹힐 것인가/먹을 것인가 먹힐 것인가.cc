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

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

bool compare(const int a, const int b){
   return a > b;
}

void solve(){
    int a, b;
    cin >> a >> b;
    vector<int> aset, bset;
    
    for(int i = 0; i < a; i++){
        int tmp;
        cin >> tmp;
        aset.pb(tmp);
    }

    for(int i = 0; i < b; i++){
        int tmp;
        cin >> tmp;
        bset.pb(tmp);
    }

    sort(bset.begin(), bset.end(), compare);

    int ans = 0;

    for(int i = 0; i < a; i++){

        for(int j = 0; j < b; j++){
            if(aset[i] > bset[j]){
                ans += b-j;
                break;
            }
        }
    }

    cout << ans << endl;
  
}


void print(){

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    
    
 }
