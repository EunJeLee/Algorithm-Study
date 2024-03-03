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
    int n;
    map<string, int> m;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string s1, s2;
        cin >> s1 >> s2;

        m[s2]++;
    }
    int ans = 1;
    for(auto item : m){
        ans *= item.second + 1;
    }
    cout << ans -1 << endl;
  
}


void print(){

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    
    
 }
