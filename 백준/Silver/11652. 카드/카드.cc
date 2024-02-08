#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <set>
#include <map>
#include <list>
#include <cmath>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

map<lli, int> m;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        lli tmp;
        cin >> tmp;

        m[tmp]++;
    }


    int count = -1;
    lli idx = 2e63;

    for(auto item : m){
        if(item.second > count) {
            count = item.second;
            idx = item.first;
        }
        else if(item.second == count) idx = min(idx, item.first);
    }

    cout << idx << endl;
    

}
  
