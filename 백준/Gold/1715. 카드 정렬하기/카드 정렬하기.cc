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
    bool operator()(const int a, const int b) {
       return a > b;
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
    priority_queue<int, vector<int>, compare> pq;
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        pq.push(tmp);
    }

    int sum = 0;
    while(pq.size() > 1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        sum += a+b;
        pq.push(a+b);
    }

    cout << sum  << endl;
}
