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

    vector<pair<int, int> > v;
    string y[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    v.pb(mp(1, 31));
    v.pb(mp(2, 28));
    v.pb(mp(3, 31));
    v.pb(mp(4, 30));
    v.pb(mp(5, 31));
    v.pb(mp(6, 30));
    v.pb(mp(7, 31));
    v.pb(mp(8, 31));
    v.pb(mp(9, 30));
    v.pb(mp(10, 31));
    v.pb(mp(11, 30));
    v.pb(mp(12, 31));

    
    int m, d;
    cin >> m >> d;
    
    int sum = 0;
    for(int i = 0; i < m-1; i++){
        sum += v[i].second;
    }

    sum += d;

    cout << y[sum%7] << endl;

    
}
