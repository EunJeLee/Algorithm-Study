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
map<int, bool> m1, m2;

bool compare(const pair<int,int>a, const pair<int, int>b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

void solve(){
  
}


void print(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    while(getline(cin, s)){
        int v[4] = {0};
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ') v[3]++;
            else if(s[i]- '0' >= 0 && s[i] - '0' <= 9) v[2]++;
            else if(s[i] >= 65 && s[i] <= 90) v[1]++;
            else v[0]++;
        }

        for(int i = 0; i < 4; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    
 }
