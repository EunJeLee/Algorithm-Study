#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    vector<int> v;
    
    int n = 1;
    int sum = 0;
    while(true){
        if(a <= n*n && n*n <= b) {
            sum += n*n;
            v.pb(n*n);
        }
        else if(n*n > b) break;
        n++;
    }

    v.size() > 0 ? cout << sum << endl << v[0] << endl : cout << -1 << endl;

}
