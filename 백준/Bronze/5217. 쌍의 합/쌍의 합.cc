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


int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};



void solve(){
   int n;
    cin >> n;
    cout << "Pairs for " << n << ": ";
    if(n > 2)cout << 1 << " " << n-1 ;
   for(int i = 2; i <= n/2; i++){
        
        if(i != n-i){
            cout << ", " << i  << " " << n - i;
        }
   }
   cout << endl;
   
}

void input(){
  
}



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;

    while(t--) solve();
}
