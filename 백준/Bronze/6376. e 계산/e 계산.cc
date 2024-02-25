#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <list>
#include <map>
#include <deque>
#define endl "\n"
#define MOD 10007
#define mp make_pair
#define pb push_back
#define lli long long

using namespace std;


int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};
double dp[10];


void solve(){

}

void input(){
  
}

double fact(double n){
    if(n == 1) return 1;
    return n * fact(n-1);
}


int main(){
   dp[0] = 1;
   dp[1] = 2;
    dp[2] = 2.5;

    cout << "n e\n";
    cout << "- -----------\n";
    

    cout << 0 << " " << dp[0] << endl;
    cout << 1 << " " << dp[1] << endl;
    cout << 2 << " " << dp[2] << endl;
   
    for(int i = 3; i < 10; i++){
        dp[i] =  dp[i-1] + (1/fact(i));
        cout << fixed;
        cout.precision(9);
        cout << i << " " << dp[i] << endl;

    }
    
}
