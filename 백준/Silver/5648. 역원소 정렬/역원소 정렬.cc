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

    for(int i = 0; i < n; i++){
        string s;

        cin >> s;

        lli sum = 0;
        for(int j = 0; j < s.size(); j++){
            sum += (s[s.size()-1-j] - '0') * pow(10, s.size()-1-j);
        }
        v.pb(sum);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;

}
  
