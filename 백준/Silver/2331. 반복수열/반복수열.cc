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

int mul(int n, int x){
    if(x == 0) return 1;
    return n * mul(n, x-1);
}

vector<int> num(int n){
    vector<int> v;
    while(n > 0) {
        v.pb(n%10);
        n /= 10;
    }

    return v;
}

void solve(){
    int a, p;
    cin >> a>> p;
    bool checked[1000000] = {false};

    stack<int> s;
    s.push(a);
    checked[a] = true;

    vector<int> v = num(a);
 
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        
        sum += mul(v[i], p);
    }
    
    int tmp = 0;
    while(!checked[sum]){
        checked[sum] = true;
        s.push(sum);
        
        tmp = 0;
        vector<int> v2 = num(sum);
        for(int i = 0; i < v2.size(); i++){
            tmp += mul(v2[i], p);
        }
        
        sum = tmp;
    }
    while(s.top() != sum){
        s.pop();
    }
    

    cout << s.size() -1 << endl;
    
    
}





int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    solve();    

}
