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

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j < i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j <= i; j++){
            cout << " ";
        }
        for(int j = 0; j < n-i-1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
