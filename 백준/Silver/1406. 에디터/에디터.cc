#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <set>
#include <map>
#include <list>
#include <cmath>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

void solve(int n){

   
}

int main(){

    list<char> l; 

    string s;

    cin>> s;

    for(int i = 0; i < s.size(); i++){
        l.push_back(s[i]);
    }
    
    int n;
    cin >> n;
    list<char>::iterator iter = l.end();

    for(int i = 0; i < n; i++){
        char c;
        cin >> c;

        if(c == 'L' && iter != l.begin()) iter--;
        else if(c == 'D' && iter != l.end()) iter++;
        else if(c == 'B' && iter != l.begin()){
            iter--;
            iter = l.erase(iter);
        }
        else if(c == 'P'){
            char d;
            cin >> d;
            l.insert(iter, d);
        }

    }

    for(auto item : l){
        cout << item;
    }cout << endl;
    
    


}
  
