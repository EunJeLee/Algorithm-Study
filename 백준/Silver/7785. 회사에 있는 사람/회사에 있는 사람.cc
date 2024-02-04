#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <set>
#include <cmath>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

set<string> s;
vector<string> v;

void solve(){

}

bool compare(const string a, const string b){
    return a > b;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name, log;
        cin >> name >> log;
        if(log.compare("enter") == 0) {
            s.insert(name);
        }
        else s.erase(name);
    }
   
    for(auto item : s){
        v.pb(item);
    }

    sort(v.begin(), v.end(), compare);
    
    
    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;

}
  
