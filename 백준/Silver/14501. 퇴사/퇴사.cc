#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <list>
#include <map>
#include <deque>
#include <tuple>
#define endl "\n"
#define MOD 10007
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define lli long long
#define FASTIO() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};
int n;
bool visited[16];
vector<int> t, p;
int total = -1;


struct compare {
    bool operator()(const pair<lli, lli> a, const pair<lli, lli> b) {
       if(a.first == b.first) return a.second < b.second;
       return a.first > b.first;
    }
};


void input(){

}

void solve(){
  
}

int dp[17];


int main() {

   cin >> n;
   t.pb(0);
   p.pb(0);
   for(int i = 0; i < n; i++){
      int t1, t2;
      cin >> t1 >> t2;
     

      t.pb(t1);
      p.pb(t2);
   }

   int ans = 0;
   for(int i = 1; i <= n+1; i++){
      dp[i] = max(ans, dp[i]);

      if(i+t[i] <= n+1) {
         dp[i+t[i]] = max(dp[i] + p[i], dp[i+t[i]]);
      }
      
      ans = max(ans, dp[i]);
   }

   cout << ans << endl;

   
 
    
}   
