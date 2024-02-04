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
  
}

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    
    cout << sum - (n-1) << endl;
}
