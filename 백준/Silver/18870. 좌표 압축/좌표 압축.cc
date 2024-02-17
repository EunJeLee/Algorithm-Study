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
    
    map<int, int> m;
    vector<int> v;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;

        m[a]++;
        v.pb(a);
    }


    
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(auto iter = m.begin(); iter -> first != v[i]; iter++){
            sum++;
        }
        cout << sum << " ";
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

// int main(){
//   solve();
    
//  }

int main() {
    int N;
    cin >> N;

    vector<int> X(N), compressedX(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    // 좌표 복사 및 정렬
    vector<int> sortedX(X);
    sort(sortedX.begin(), sortedX.end());
    
    // 중복 제거
    sortedX.erase(unique(sortedX.begin(), sortedX.end()), sortedX.end());

    // 좌표-압축된 값 매핑
    map<int, int> compressMap;
    for (int i = 0; i < sortedX.size(); i++) {
        compressMap[sortedX[i]] = i;
    }

    // 원본 좌표에 압축된 값을 매핑
    for (int i = 0; i < N; i++) {
        compressedX[i] = compressMap[X[i]];
        cout << compressedX[i] << " ";
    }
    cout << endl;

    return 0;
}
