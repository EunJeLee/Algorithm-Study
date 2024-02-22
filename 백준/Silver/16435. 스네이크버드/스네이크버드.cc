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





int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   
    int n, m;
    vector<int> v;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        v.pb(tmp);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        if(m < v[i]) break;
        else m++;
    }

    cout << m << endl;
}
