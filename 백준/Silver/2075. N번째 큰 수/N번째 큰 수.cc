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
        for(int j = 0; j < n; j++){
            int tmp;
            cin >> tmp;
            if(i == 0){
                pq.push(tmp);
            }
            else{
                pq.push(tmp);
                pq.pop();
            }
        }
    }

    

    cout << pq.top() << endl;

}
