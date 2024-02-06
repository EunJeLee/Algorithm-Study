#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <set>
#include <map>
#include <list>
#include <cmath>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

void solve(){
    vector<pair<int, int> > v;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.pb(mp(a,b));
    }

    sort(v.begin(), v.end());

    int result = 1;
    int max = v[0].second;

    for(int i = 1; i < n; i++){
        if(max > v[i].second) {
            result++;
            max = v[i].second;
        }
    }

    cout << result << endl;
    
   
}

bool compare(int a, int b){
    return a > b;
}



int main(){

    int t;
    cin >> t;
    while(t--)solve();

}
  
