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

vector<lli> v;

int main(){
    int n;
    cin >> n;

    int sum = 0;

    for(int i = n; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            sum += i + j;
        }
    }

    cout << sum << endl;
}

