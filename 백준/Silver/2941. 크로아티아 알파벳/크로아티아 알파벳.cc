#include <iostream>
#include <algorithm>
#include <string>
#define endl "\n"

using namespace std;

string s;
int ans = 0;


// c, d, l, n, s, z 6개의 경우만 확인해보면 될 것 같다.


void input(){
    cin >> s;
}

void solve(){
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'c'){
            if(s[i+1] == '=' || s[i+1] == '-'){
                i++;
            }
        }
        else if (s[i] == 'd')
        {
            if (s[i + 1] == 'z' && s[i + 2] == '=')
                i += 2;
            else if (s[i + 1] == '-')
                i++;
        }
        else if (s[i] == 'l' && s[i + 1] == 'j')
            i++;
        else if (s[i] == 'n' && s[i + 1] == 'j')
            i++;
        else if (s[i] == 's' && s[i + 1] == '=')
            i++;
        else if (s[i] == 'z' && s[i + 1] == '=')
            i++;
        ans++;
    }

    cout << ans << endl;
}


int main(){
    input();
    solve();
    
    return 0;
}