#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <cstring>
#define endl "\n"

using namespace std;

int N, MAX, MIN;
int board[55][55] = {0,};
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};
int visited[55][55] = {0,};
bool chec = false;

bool visitCheck(){
    int count = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(visited[i][j] == 0) count++;
        }
    }
    if(count == N*N)return false;
    return true;
}

bool nearCheck(int a, int b){
    if(a > b){
        if(a - b <= MAX && a - b >= MIN) return true;
    }
    else {
        if(b - a <= MAX && b - a >= MIN) return true;
    }
    return false;
}

void bfs(int y, int x, int cnt){
    visited[y][x] = cnt;
    queue<pair<int, int>> q;
    q.push({y, x});

    while(!q.empty()){
        int cur_y = q.front().first;
        int cur_x = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int nxt_y = cur_y + dy[i];
            int nxt_x = cur_x + dx[i];
            if(nxt_y >= N || nxt_x >= N || nxt_y < 0 || nxt_x < 0) continue;
            if(visited[nxt_y][nxt_x] != 0) continue;
            if(!nearCheck(board[cur_y][cur_x], board[nxt_y][nxt_x])) continue;
            visited[nxt_y][nxt_x] = cnt;
            
            q.push({nxt_y, nxt_x});
        }
    }
    
}

void solve(){
    memset(visited, 0, sizeof(visited));

    int cnt = 1;

    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < 4; k++){
                int ii = i + dy[k];
                int jj = j + dx[k];

                if(visited[i][j] != 0) continue;
                if(ii >= N || jj >= N || ii < 0 || jj < 0) continue;
                if(nearCheck(board[i][j], board[ii][jj])){
                    bfs(i , j, cnt);
                    cnt++;
                }
            }
            
        }
    }

    for(int k = 1; k <= cnt; k++){
        int sum = 0; int cntt = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(visited[i][j] == k){
                    sum += board[i][j];
                    cntt++;
                }
            }
        }
        if (cntt == 0){
            chec = true;
            break;
        }
        int avr = sum / cntt;
 
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
               if(visited[i][j] == k) board[i][j] = avr;
            }
        }    
    }
}


void input(){
    cin >> N >> MIN >> MAX;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> board[i][j];
        }
    }
}

int main(){
    input();
    int answer = 0;
    while(true){
        solve();
        if(!visitCheck()) {
            break;
        }
        answer++;
    }
    cout << answer << endl;

    
    

    return 0;
}