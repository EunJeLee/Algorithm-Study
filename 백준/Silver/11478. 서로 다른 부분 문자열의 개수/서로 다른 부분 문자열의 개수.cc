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
    string s;
    set<string> se;

    cin >> s;
    

    for(int i = 0; i < s.size(); i++){
        string tmp;
        for(int j = i; j < s.size(); j++){
            tmp += s[j];
            se.insert(tmp);
        }
    }
    cout << se.size() << endl;

    

 }
