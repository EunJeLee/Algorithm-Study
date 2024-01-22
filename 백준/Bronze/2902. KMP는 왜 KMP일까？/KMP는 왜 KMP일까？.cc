#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    cout << s[0];
    for(int i = 1; i < s.size(); i++){
        if(s[i] == 45) cout << s[i+1];
    }
    return 0;
}