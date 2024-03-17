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

bool compare(const int a, const int b){
   return a > b;
}

void solve(){
  
  
}


void print(){

}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n, m;
    map<string, int> k;

    cin >> n >> m;

    int sum = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        k[s]++;
    }

    for(int i = 0; i < m; i++){
        string s;
        cin >> s;
        if(k[s])  {
            k[s]++; sum++;
        }
    }

    cout << sum << endl;
    for(auto item: k){
        if(item.second == 2){
            cout << item.first << endl;
        }
    }

 }
