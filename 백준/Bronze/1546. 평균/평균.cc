#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <cmath>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

vector<float> v;

void solve(){
  
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        v.pb(tmp);
    }

    sort(v.begin(), v.end());

    int M = v[n-1];

    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += float(v[i]* 100 /M);
    }

    cout << sum / n << endl;
    
}
  
