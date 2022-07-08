#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
#define endl '\n'

using namespace std;

int N;
int board[101][101];
bool visited[101][101];
int dist[101][101];
int ans[10001];
int label = 1;

queue<pair<int, int>> q;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, -1, 0, 1};

void input(){
  cin >> N;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      cin >> board[i][j];
    }
  }
}

void labeling(){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(board[i][j] && !visited[i][j]){
        visited[i][j] = true;
        board[i][j] = label;
        q.push({i, j});

        while(!q.empty()){
          int y = q.front().first;
          int x = q.front().second;
          q.pop();

          for(int k = 0; k < 4; k++){
            int ny = y + dy[k];
            int nx = x + dx[k];

            if(ny >= 0 && nx >= 0 &&  ny < N && nx < N){
              if(board[ny][nx] && !visited[ny][nx]){
                visited[ny][nx] = true;
                board[ny][nx] = label;
                q.push({ny, nx});
              }
            }
          }
        }
        label++;
      }
    }
  }
  memset(visited, false, sizeof(visited));
}

int solve(int num){
  memset(visited, false, sizeof(visited));
  memset(dist, 0, sizeof(dist));
   for(int i = 0; i < N; i++){
     for(int j = 0; j < N; j++){
       for(int k = 0; k < 4; k++){
         if(board[i][j] == num){
           visited[i][j] = true;
           int y = i + dy[k];
           int x = j + dx[k];

           if(y >= 0 && x >= 0 && y < N && x < N){
             if(!board[y][x]){
               q.push({i, j});
             }
           }
         }
       }
       }
     }

     while(!q.empty()){
       int y = q.front().first;
       int x = q.front().second;
       q.pop();

       for(int k = 0; k < 4; k++){
         int ny = y + dy[k];
         int nx = x + dx[k];
         if(ny >= 0 && nx >= 0 && ny < N && nx < N){
           if(!board[ny][nx] && !visited[ny][nx]){
             visited[ny][nx] = true;
             dist[ny][nx] = dist[y][x] + 1;
             q.push({ny, nx});
           }
           else if(board[ny][nx] != num && board[ny][nx] != 0){
             while(!q.empty()) q.pop();
             return dist[y][x];
           }
         }
        }
      }
   }



int main(){
  input();
  int min = 1000000000;
  labeling();
  for(int i = 1; i < label; i++){
    int temp = solve(i);
    // cout << temp << endl;
    if(min > temp){
      min = temp;
    }
  }
  cout << min << endl;


  return 0;
}
