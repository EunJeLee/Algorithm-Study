#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#define MOD 10007
#define lli long long

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main(){
   int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        cout << s[0] << s[s.size()-1] << endl;
    }
}
