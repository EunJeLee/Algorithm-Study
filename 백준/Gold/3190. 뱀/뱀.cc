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

void move(int y, int x){
    d.push_front(mp(y, x));
    // 대가리 벽에 박은 케이스
    if(x < 0 || y < 0 || x >= n || y >= n) return;

    // 지 몸통에 박은 케이스 
    
    for(int i = 1; i < d.size(); i++){
        if(d[i].first == y && d[i].second == x) return;
        // cout << item.first << " " << item.second << endl;

        
        // if(item.first != d.front().first && item.second != d.front().second){
        //     if(item.first == y && item.second == x) return;
        // }
        
    }

    if(board[y][x] != 1) d.pop_back();
    else board[y][x] = 0;

    for(int i = 0; i < direction.size(); i++){
        if(direction[i].first > time_s) break;
        if(direction[i].first == time_s) {
            length++;
            if(direction[i].second == 'D') {
                direc_idx = (direc_idx + 1) % 4;
            }
            else if(direction[i].second == 'L') {
                if(direc_idx == 0) direc_idx = 3;
                else direc_idx = direc_idx - 1;
            }
        }
    }
    

    int ny = y + dy[direc_idx];
    int nx = x + dx[direc_idx];
    
    time_s++;
    map2[ny][nx] = time_s;
    // cout << time_s << " " << ny << " " << nx << endl;
    move(ny, nx);
    

}

void solve(){
    

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
    cin >> n;

    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        int y, x;

        cin >> y >> x;

        board[y-1][x-1] = 1;
    }

    cin >> k;

    for(int i = 0; i < k; i++){
        int t;
        char c;
        cin >> t >> c;
        direction.pb(mp(t, c));
    }
    d.pb(mp(0, 0));
    
    move(0, 1);

    cout << time_s << endl;

    // print();
    
 }

