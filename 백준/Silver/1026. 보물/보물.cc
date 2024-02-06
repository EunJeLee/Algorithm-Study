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

void solve(int n){

   
}

bool compare(int a, int b){
    return a > b;
}

int main(){
    vector<int> a, b;

    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        a.pb(tmp);
    }
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        b.pb(tmp);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), compare);

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i] * b[i];
    }
    cout << sum << endl;

}
  
