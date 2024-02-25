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
    bool operator()(const int a, const int b) {
       return a > b;
    }
};

void solve(){
    

}

void input(){
  
}


int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    priority_queue<int, vector<int>, compare> pq;
    int N;

    cin >> N;
    
    while(N--) {
int n;
    cin >> n;

    if(n != 0) pq.push(n);
    else{
        if(pq.size() > 0) {
            cout << pq.top() << endl;
            pq.pop();
        }
        else{
            cout << 0 << endl;
        }
    }
    }
    
}
