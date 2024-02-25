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


int main(){
    FASTIO();
    priority_queue<pair<lli, lli>, vector<pair<lli, lli>>, compare> pq;
    priority_queue<lli, vector<lli>, greater<lli>> ans;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        pq.push(mp(a, b));
    }

    lli time = 1;
    lli sum = 0;

    while(!pq.empty()){
        pair<lli, lli> cur = pq.top();
        pq.pop();

        if(cur.first >= time) {
            time++;
            ans.push(cur.second);
            
            
        }
        else {
            if(ans.top() < cur.second){
                ans.pop();
                ans.push(cur.second);
            }
            
        }
    }

    while(!ans.empty()){
        sum += ans.top();
        ans.pop();
    }

    cout << sum << endl;
}

