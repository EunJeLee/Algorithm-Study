#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    string s;
    int m, cnt =0;
    cin >> s >> m;
    
    int rest = m % s.size();
    
    for(int i = 0; i < m/s.size(); i++){
        if(cnt >= stoi(s)) break;
        cout << s;
        cnt++;
        
    }
    if(cnt < stoi(s)){
        for(int i = 0; i < rest; i++){
        cout << s[i];
    }
    }
    
    return 0;
}