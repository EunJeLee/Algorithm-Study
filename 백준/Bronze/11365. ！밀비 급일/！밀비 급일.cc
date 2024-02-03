    #include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define endl "\n"
#define MOD 10007
#define lli long long

using namespace std;

int main(){
    string s;

    
    
    while(true){
        getline(cin, s);
        if(s.compare("END") == 0) break;
        for(int i = s.size() - 1; i >= 0; i--){
            cout << s[i];
        }
        cout << endl;
    }
}
