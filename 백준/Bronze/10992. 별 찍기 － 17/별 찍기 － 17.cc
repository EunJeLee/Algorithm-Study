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

    if(n == 1) {
        cout << "*";
        return 0;
    }

    for(int i = 0; i < n-1; i++){
        cout << " ";
    }
    cout << "*" << endl;

    for(int i = 1; i < n-1; i++){
        for(int j = i; j < n-1; j++){
            cout << " ";
        }
        cout << '*';
        for(int j = 0; j < 2*i-1; j++){
            cout << " ";
        }
        cout << "*" <<endl;
    }

    for(int i = 0; i < 2*n-1; i++){
        cout << "*";
    }
    cout << endl;

}
