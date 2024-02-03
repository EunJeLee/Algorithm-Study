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

vector<pair<int, int> > v;

bool compare(const pair<int, int> &a, pair<int, int> &b) {
    if(a.first == b.first) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;

        cin >> a >> b;
        v.pb(mp(b, a));
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++) cout << v[i].second << " " << v[i].first << endl;

}
