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
    string s1, s2;
    int n;

    cin >> n;

    for(int i = 0 ; i < n; i++){
        cin >> s1 >> s2;
        cout << "Distances: ";
        for(int j = 0; j < s1.size(); j++){
            s2[j] - s1[j] >= 0 ? cout << s2[j] - s1[j] : cout << s2[j] - s1[j] + 26;
            cout << " ";
        }

        cout << endl;
    }
}
