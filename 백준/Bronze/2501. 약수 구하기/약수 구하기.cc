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
 
}

void input(){
  
}



bool prime(int n){
    if(n == 1) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n, m;
    vector<int> v;

    cin >> n >> m;

    for(int i = 1; i <= n; i++){
        if(n % i == 0) v.pb(i);
    }

    if(m > v.size()) cout << 0 << endl;
    else cout << v[m-1] << endl;
}
