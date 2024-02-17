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

int board[105][105];
int map2[105][105];
int n;
vector<pair<int, char> > direction;
deque<pair<int, int> > d;
int time_s = 1;
int direc_idx = 0;
int length = 0;
int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};




bool compare(const pair<int,int>a, const pair<int, int>b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

void solve(){
    int n;
    string s;

    cin >> n >> s;

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < n; j++){
            cout << s[i];
        }
    }    
    cout << endl;
}


void print(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << map2[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--) solve();
    
 }

