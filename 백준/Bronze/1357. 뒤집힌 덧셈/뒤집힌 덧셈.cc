#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    string s1, s2, s3;
    
    cin >> s1 >> s2;
    
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    
    int num = stoi(s1) + stoi(s2);
    
    while(num > 0){
        s3 += char(num % 10 + 48);
        num /= 10;
    }
    
    cout << stoi(s3);
    
    return 0;
}