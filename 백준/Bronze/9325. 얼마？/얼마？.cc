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
    int sum;
    cin >> sum;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        sum += a*b;
    }

    cout << sum << endl;
}

int main(){
    int n;
    cin >> n;

    while(n--) solve();

}
