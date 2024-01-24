#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"

using namespace std;

void solve(){
    string s;
    cin >> ws;
    getline(cin, s);

    if(s[0] >= 97) s[0] = char(s[0]-32);
    cout << s << endl;
}

int main(){
    int N;
    cin >> N;

    for(int i =0; i< N; i++){
        solve();
    }
       
    
    return 0;
}