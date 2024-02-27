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

struct compare {
    bool operator()(const pair<lli, lli> a, const pair<lli, lli> b) {
       if(a.first == b.first) return a.second < b.second;
       return a.first > b.first;
    }
};


// bool compare(const int a, const int b){
//     return a > b;
// }

void solve(){

}

void input(){
  
}



int main() {
    FASTIO();
    vector<pair<int, int>> v;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x, y;

        cin >> x >> y;
        v.pb(mp(x, y));
    }

    for(int i = 0; i < v.size(); i++){
        int ans = 0;
        for(int j = 0; j < v.size(); j++){
            if(v[i].first < v[j].first && v[i].second < v[j].second) ans++;
        }
        cout << ans + 1 << " ";
    }
    cout << endl;


}
