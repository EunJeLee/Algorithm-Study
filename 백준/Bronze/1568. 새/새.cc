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

using namespace std;


int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};



void solve(){

}

void input(){
  
}



int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;

    cin >> n;

    int t = 0;
    int total = n;

    int k = 1;
    while(total > 0){
        t++;
        if(total >= k){
            total -= k;
        }
        else {
            total -= 1;
            k = 1;
        }
        k++;
    }

    cout << t << endl;
    

    
}
