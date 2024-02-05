#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <set>
#include <map>
#include <cmath>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

vector<pair<int, string> > v;

void solve(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        int num;
        cin >> s >> num;
        v.pb(mp(num, s));
    }
    
    sort(v.begin(), v.end());

    cout << v[v.size()-1].second << endl;    
}

int main(){
    int t;
    cin >> t;

    while(t--) solve();

}
  
