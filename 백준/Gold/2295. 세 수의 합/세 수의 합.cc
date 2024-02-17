#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <string>
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <cstring>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};
vector<int> v, sum;

bool compare(const pair<int,int>a, const pair<int, int>b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

void solve(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;

        v.pb(tmp);
    }

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            sum.pb(v[i]+v[j]);
        }
    }

    sort(v.begin(), v.end());
    sort(sum.begin(), sum.end());


    for(int i = n-1; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            if(binary_search(sum.begin(), sum.end(), v[i] - v[j])){
                cout << v[i] << endl;
                return;
            }
        }
    }
    

}


void print(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
 }
