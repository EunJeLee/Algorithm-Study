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
    string s;

    cin >> s;

    int sum = 1;

    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == ',') sum++;
    }
 

    cout << sum << endl;
    
}
