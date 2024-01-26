#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"

using namespace std;
int main(){
    int t;

    cin >> t;

    for(int i = 0; i < t; i++){
        int n, m, sum = 0;

        cin >> n >> m;

        for(int j = n; j<= m; j++){
            string s = to_string(j);
            for(int k = 0; k < s.size(); k++){
                if(s[k] == '0') sum++;
            }
        }

        cout << sum << endl;
    }
 
    return 0;
}