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

int lcs[1005][1005];
stack<char> s;
int dp[1005][1005];


int main(){
    map<string, int> m;
    vector<pair<int, string> > v;
    int n, l;

    cin >> n >> l;

    for(int i = 0; i < l; i++){
        string s;
        cin >> s;

        m[s] = i+1;
    }

    for(auto item : m){
        v.pb(mp(item.second, item.first));
    }

    sort(v.begin(), v.end());

    if(v.size() >= n) for(int i = 0 ; i < n; i++) cout << v[i].second << endl;
    else for(int i = 0; i < v.size(); i++) cout << v[i].second << endl;
    

    return 0;
}