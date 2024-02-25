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
#define lli long long
#define FASTIO() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};

struct compare {
    bool operator()(const lli a, const lli b) {
       return a > b;
    }
};


// bool compare(const int a, const int b){
//     return a > b;
// }

void solve(){
    priority_queue<lli, vector<lli>, compare> pq;
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        lli tmp;
        cin >> tmp;
        pq.push(tmp);
    }

    lli sum = 0;
    while(pq.size() > 1){
        lli a = pq.top();
        pq.pop();
        lli b = pq.top();
        pq.pop();
        sum += a+b;
        pq.push(a+b);
    }

    cout << sum  << endl;

}

void input(){
  
}


int main(){
    FASTIO();
    int n;
    cin >> n;
    while(n--) solve();
}
