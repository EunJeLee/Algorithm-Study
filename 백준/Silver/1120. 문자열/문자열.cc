#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <string>
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <cstring>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;


void solve(){
    
}

void input(){
  
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    string s1, s2;
    cin >> s1 >> s2;


    int len1 = s1.size();
    int len2 = s2.size();

    int min = 55;
    for(int i = 0; i <= len2-len1; i++ ){
        int count = 0;
        for(int j = 0; j < len1; j++){
            if(s1[j] != s2[i+j])count++;
        }
        if(min > count) min = count; 
    }
    cout << min << endl;

 }
