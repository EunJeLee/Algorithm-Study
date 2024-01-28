#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#define MOD 10007
#define lli long long

using namespace std;

lli length1[26], length2[26];

bool compare(int a, int b) {
    return a > b;
}

int main(){

    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        s[i] = toupper(s[i]);
        length1[s[i]-65]++;
        length2[s[i]-65]++;
    }

    sort(length2, length2+26, compare);
    if(length2[0] == length2[1]) {
        cout << '?' << endl;
        return 0;
    }
    
    int max = 0;
    int idx = 0;
    
    for(int i = 0; i < 26; i++) {
        if(length1[i] > max){
            max = length1[i];
            idx = i;
        }
    }

    cout << char(idx+65) << endl;
}
