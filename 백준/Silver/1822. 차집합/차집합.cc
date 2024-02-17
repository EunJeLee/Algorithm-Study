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
map<int, bool> m1, m2;

bool compare(const pair<int,int>a, const pair<int, int>b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

void solve(){
    vector<int> v, ans;
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        v.pb(tmp);
    }

    for(int i = 0; i < m; i++){
        int tmp;
        cin >> tmp;
        m2[tmp] = true;
    }

    int sum = 0;
    for(int i = 0 ; i < n; i++){
        if(!m2[v[i]]) {
            sum++;
            ans.pb(v[i]);
        }
    }

    sort(ans.begin(), ans.end());
    
    cout << sum << endl;
    if(ans.empty()) return;
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << endl;
}


void print(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
 }
