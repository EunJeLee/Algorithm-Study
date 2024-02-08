#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
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

bool compare(const pair<int,int>a, const pair<int, int>b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

vector<int> v[10005];
vector<pair<int, int> > ans;
int d[10005];
bool visited[10005];
int n, m;
int cnt = 1;

void dfs(int x){
    visited[x] = true;

    for(int i = 0; i < v[x].size(); i++){
        if(!visited[v[x][i]]) {
            visited[v[x][i]] = true;
            cnt++;
            dfs(v[x][i]);
        }
        
    }
}



int main(){
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;

        cin >> a >> b;

        v[b].pb(a);
    }



    for(int i = 1; i <= n; i++){
        if(v[i].size() == 0) continue;
        dfs(i);
        ans.pb(mp(i, cnt));
        cnt = 1;
        memset(visited, 0, sizeof(visited));
    }

    sort(ans.begin(), ans.end(), compare);

    // for(int i = 0; i < ans.size(); i++){
    //     cout << ans[i].first << " " <<ans[i].second << endl;
    // }

    int max = ans[0].second;

    for(int i = 0; i < n; i++){
        if(ans[i].second == max) cout << ans[i].first << " ";
    }

 }

