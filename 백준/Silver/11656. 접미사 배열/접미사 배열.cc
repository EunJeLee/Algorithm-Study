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
    vector<string> v;

    string s;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        string tmp;
        for(int j = i; j < s.size(); j++){
            tmp += s[j];
        }
        v.pb(tmp);
    }

    sort(v.begin(), v.end());
 

    for(auto item :v){
        cout << item << endl;
    }
 
}


void print(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
 }
