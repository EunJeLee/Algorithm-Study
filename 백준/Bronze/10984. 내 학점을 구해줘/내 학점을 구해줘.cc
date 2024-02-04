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

void solve(){
    int n;
    cin >> n;

    int g = 0;
    float c = 0;

    for(int i = 0; i < n; i++){
        int tmp1;
        float tmp2;

        cin >> tmp1 >> tmp2;
        g += tmp1;
        c += tmp2 * tmp1;
    }

    cout << g << " " << float(c/g) << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--) solve();
}
