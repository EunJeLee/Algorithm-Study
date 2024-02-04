#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <cmath>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

int board[605][605];


void solve(){

}

int main(){

    int h, w, x, y;

    cin >> h >> w >> y >> x;

    for(int i = 0; i < h+y; i++){
        for(int j = 0; j < w+x; j++){
            cin >> board[i][j];
        }
    }

    for(int i = 0; i < h-y; i++){
        for(int j = 0; j < w-x; j++){
            board[y+i][x+j] -= board[i][j];
        }
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }



}
  
