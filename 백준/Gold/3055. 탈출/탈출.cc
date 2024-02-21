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

queue<pair<int, int> > water;
queue<pair<pair<int, int>, int> > beaver;

char board[55][55];
int dist[55][55];
int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};
int r, c;

void water_bfs(){
    bool checked_water[55][55] = {false};

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(board[i][j] == '*' && !checked_water[i][j]){
                checked_water[i][j] = true;
                water.push(mp(i, j));
            }
        }
    }

    while(!water.empty()){
        int y = water.front().first;
        int x = water.front().second;

        water.pop();

        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny >= 0 && nx >= 0 && ny < r && nx < c){
                if((board[ny][nx] == '.' || board[ny][nx] == 'S') && !checked_water[ny][nx]){
                    checked_water[ny][nx] = true;
                    board[ny][nx] = '*';
                }
            }
        }
        
    }
}

void beaver_bfs() {
    bool checked_beaver[55][55] = {false};

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(board[i][j] == 'S' && !checked_beaver[i][j]){
                checked_beaver[i][j] = true;
                beaver.push(mp(mp(i, j), 0));
            }
        }
    }
    int time = 0;
    water_bfs();

    while(!beaver.empty()){
        // water_bfs();
        int y = beaver.front().first.first;
        int x = beaver.front().first.second;
        int now = beaver.front().second;
        beaver.pop();

        if(now > time){
            time++;
            water_bfs();
        }

        for(int i = 0; i < 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny >= 0 && nx >= 0 && ny < r && nx < c){
                if(board[ny][nx] == 'D'){
                    cout << dist[y][x] + 1 << endl;
                    return;
                }
                if(board[ny][nx] == '.' && !checked_beaver[ny][nx]){
                    dist[ny][nx] = dist[y][x] + 1;
                    checked_beaver[ny][nx] = true;
                    board[ny][nx] = 'S';
                    beaver.push(mp(mp(ny, nx), now+1));
                }
            }
        }
    }
    cout << "KAKTUS" << endl;
    return;
    
}


void solve(){
    
    beaver_bfs();
    
}

void input(){
    cin >> r >> c;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> board[i][j];
        }
    }
}





int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    input();
    solve();    

}
