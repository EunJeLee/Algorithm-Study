#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

void solve(){
    int n;
    vector<pair<int, string> > v;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        int price;
        string name;
        cin >> price >> name;
        
        v.pb(mp(price, name));
    }

    sort(v.begin(), v.end());
    
    cout << v[n-1].second << endl;
}


int main(){
    int n;
    cin >> n;

    while(n--) solve();

   
}
