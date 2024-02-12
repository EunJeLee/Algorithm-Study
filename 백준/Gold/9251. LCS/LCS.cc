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

int main(){
   string s1, s2;

   cin >> s1 >> s2;

   for(int i = 1; i <= s1.size(); i++){
    for(int j = 1; j <= s2.size(); j++){
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

   cout << lcs[s1.size()][s2.size()] << endl;

    return 0;
}