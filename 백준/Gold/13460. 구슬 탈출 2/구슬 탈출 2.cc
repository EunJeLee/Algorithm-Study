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

struct POS
{
    int R_x, R_y;
    int B_x, B_y;
    int count;
};

POS start;

char board[11][11];
bool visited[11][11][11][11];

int r, c;
queue<POS> q;

// up right down left
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

// bool compare(const int a, const int b){
//    return a > b;
// }


void bfs(){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(board[i][j] == 'R'){
                start.R_x = j;
                start.R_y = i;
            }
            if(board[i][j] == 'B'){
                start.B_x = j;
                start.B_y = i;
            }
        }
    }

    start.count = 0;
    q.push(start);
    
    while(!q.empty()){
        POS cur = q.front(); q.pop();

        // 10회 이상시 종료
        if(cur.count > 10) {
            cout << -1 << endl;
            return;
        }

        for(int i = 0; i < 4; i++){
            int nry = cur.R_y + dy[i];
            int nrx = cur.R_x + dx[i];
            int nby = cur.B_y + dy[i];
            int nbx = cur.B_x + dx[i];
            int countR = 0;
            int countB = 0;


            while(nry >= 0 && nrx >= 0 && nry < r && nrx < c){
                if(board[nry][nrx] == 'O') break;
                else if(board[nry][nrx] != '#') {
                    countR++;
                    nry += dy[i];
                    nrx += dx[i];
                }

                else if(board[nry][nrx] == '#'){
                    nry -= dy[i];
                    nrx -= dx[i];
                    break;
                } 
                
            }

    

            while(nby >= 0 && nbx >= 0 && nby < r && nbx < c){
                if(board[nby][nbx] == 'O') break;
                else if(board[nby][nbx] != '#') {
                    countB++;
                    nby += dy[i];
                    nbx += dx[i];
                }

                else if(board[nby][nbx] == '#'){
                    nby -= dy[i];
                    nbx -= dx[i];
                    break;
                }
            }

            if(board[nby][nbx] == 'O') continue;

            if(board[nry][nrx] == 'O') {
                if(cur.count == 10) {
                    cout << -1 << endl;
                    return;
                }
                cout << cur.count+1 << endl;

                return;
            }

            if(nry == nby && nrx == nbx) {
                if(countB > countR) {
                    nby -= dy[i];
                    nbx -= dx[i];
                }
                else if(countB < countR){
                    nry -= dy[i];
                    nrx -= dx[i];
                }
            }

            if(visited[nry][nrx][nby][nbx]) continue;
            visited[nry][nrx][nby][nbx] = true;
            POS next;
            next.R_y = nry;next.R_x = nrx;
            next.B_y = nby;next.B_x = nbx;
            next.count = cur.count+1;

            q.push(next);
        }
    }

    cout << -1 << endl;

}

void solve(){
    bfs();
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
    bfs();

 }
