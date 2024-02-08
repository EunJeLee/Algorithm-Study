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
    while(true){
        int a, b;

        cin >> a>> b;
    
        if(a == 0 && b == 0) break;

        cout << a/b << " " << a%b << " / " << b << endl;
    }

 }

