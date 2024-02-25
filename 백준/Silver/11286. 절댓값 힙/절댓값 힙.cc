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

using namespace std;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};

struct compare {
    bool operator()(const pair<int, int> a, const pair<int, int> b) {
        if(a.first != b.first) return a.first > b.first;
        return a.second > b.second;
    }
};


priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;



void solve(){
    int n;
    cin >> n;

    if(n != 0) pq.push(mp(abs(n), n));
    else{
        if(pq.size() > 0) {
            cout << pq.top().second << endl;
            pq.pop();
        }
        else{
            cout << 0 << endl;
        }
    }

}

void input(){
  
}


int main(){
  int N;

    cin >> N;
    
    while(N--) solve();
    
}
