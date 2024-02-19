#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <list>
#include <map>
#include <deque>
#define endl "\n"
#define MOD 10007
#define mp make_pair
#define pb push_back

using namespace std;

vector<int> v;

int main(){
    int n ,m;

    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int tmp;
        cin >> tmp;
        v.pb(tmp);
    }

    sort(v.begin(), v.end());

    int sum = 0;
    for(int i = 0; i < m; i++){
        sum += v[i];
    }

    if(sum < n) {
        cout << 0 << endl;
        return 0;
    }

    
    int low = 1;
    int high = v[m-1];
    int result = 1;

    while(high >= low){
        int mid = (low + high) / 2;
        
        int cnt = 0;
        for(int i = 0; i < v.size(); i++){
            cnt += v[i]/mid;
        }

        if(cnt >= n) {
            low = mid + 1;
            result = mid;
        }
        else {
            high = mid - 1;
        }
    }

    cout << result << endl;


 
}
