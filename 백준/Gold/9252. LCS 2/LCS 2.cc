#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <list>
#include <deque>
#define endl "\n"

using namespace std;

int lcs[1005][1005];
stack<char> s;

int main(){
   string s1, s2;

   cin >> s1 >> s2;

   int s1_len = s1.size();
    int s2_len = s2.size();

   for(int i = 1; i <= s1_len; i++){
    for(int j = 1; j <= s2_len; j++){
        if(s1[i-1] == s2[j-1]) lcs[i][j] = lcs[i-1][j-1] + 1;
        
        else lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
    }
   }

//    for(int i = 0; i <= s1.size(); i++){
//     for(int j = 0; j <= s2.size(); j++){
//         cout << lcs[i][j] << " ";
//     }
//     cout << endl;
//    }

   cout << lcs[s1_len][s2_len] << endl;

   while(true){
    if(lcs[s1_len][s2_len] == 0)break;
    
    if(lcs[s1_len-1][s2_len] == lcs[s1_len][s2_len]) s1_len--;
    else if(lcs[s1_len][s2_len-1] == lcs[s1_len][s2_len]) s2_len--;
    else {
        s.push(s1[s1_len-1]);
        s1_len--;
        s2_len--;
    }
   }


    while(!s.empty()){
        cout << s.top();
        s.pop();
    }


    return 0;
}