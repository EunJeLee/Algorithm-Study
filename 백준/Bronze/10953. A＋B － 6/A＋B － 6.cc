#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>> n;
    
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        cout << int(s[0] - 48) + int(s[2] - 48) << endl;
    }

    return 0;
}