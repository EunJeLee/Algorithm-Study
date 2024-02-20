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

void solve(){
    int a, b, c, d, e, f, g, h;

    cin >> a >> b>> c >> d >> e >> f >> g >> h;

    int hp = 1;
    int mp = 1;
    int sword = 0;

    if(a + e > 1) hp = a + e;
    if(b + f > 1) mp = b + f;
    if(c + g > 0) sword = c + g;
    
    cout << hp + 5*mp + 2*sword + 2*(d+h) << endl;
   
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) solve();
}
