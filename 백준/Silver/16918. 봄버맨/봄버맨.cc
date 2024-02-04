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

vector<float> v;
queue<pair<int, int> > q;

char board[205][205];
int tictok[205][205];
int r, c, n;

int dx[5] = {0, 0, -1, 0, 1};
int dy[5] = {0, -1, 0, 1, 0};


void fill(){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(board[i][j] == '.'){
                board[i][j] = 'O';
            }
            tictok[i][j] += 1;
        }
    }
}

void boom() {
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(board[i][j] == 'O' && tictok[i][j] == 2){
                q.push(mp(i, j));
                tictok[i][j] = 0;
            }
        }
    }

    while(!q.empty()){
        int y =  q.front().first;
        int x =  q.front().second;
        q.pop();

        for(int k = 0; k < 5; k++){
            int nx = x + dx[k];
            int ny = y + dy[k];

            if(ny >= 0 && ny < r &&  nx >= 0 && nx < c){
                board[ny][nx] = '.'; 
                tictok[ny][nx] = 0;
            }
        }

    }
}


void solve(){
   int time = 0;
   
   while(time < n){
    time++;
    
    if(time % 2 == 1){
        boom();
    }
    else if(time % 2 == 0){
        fill();
    }
   }
}

int main(){
    cin >> r >> c >> n;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> board[i][j];
            if(board[i][j] == 'O') tictok[i][j] += 1;
        }
    }

    solve();

     for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << board[i][j];
        }
        cout << endl;
    }


}
  
