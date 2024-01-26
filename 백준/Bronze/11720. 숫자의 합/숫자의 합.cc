#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"

using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    string s;

    cin>> s;
    for(int i = 0; i < s.length(); i++){
        sum += (s[i]-48);
    }

    cout << sum << endl;
 
    return 0;
}