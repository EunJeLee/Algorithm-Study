#include <iostream>
#include <algorithm>
#include <memory.h>
#include <random>
#include <unordered_map>
#include <math.h>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <set>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define TC()          \
    int TEST_CASE;    \
    cin >> TEST_CASE; \
    for (int TEST_NUM = 1; TEST_NUM <= TEST_CASE; TEST_NUM++)

using namespace std;

string s[101];
char board[101][101];
bool isvisited[101][101];
bool RGisvisited[101][101];
int RGcnt = 0;
int cnt = 0;
int n;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
queue<pair<int, int>> q;

void bfs(){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(board[i][j] == 'B' && !isvisited[i][j]){
        isvisited[i][j] = true;
        q.push({i, j});

        while(!q.empty()){
          int y = q.front().first;
          int x = q.front().second;
          q.pop();

          for(int k = 0; k < 4; k++){
            int ny = y + dy[k];
            int nx = x + dx[k];
            if(ny >= 0 && nx >= 0 && ny < n && nx < n){
              if(board[ny][nx] == 'B' && !isvisited[ny][nx]){
                isvisited[ny][nx] = true;
                q.push({ny, nx});
              }
            }
          }
        }
        cnt++;
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(board[i][j] == 'G' && !isvisited[i][j]){
        isvisited[i][j] = true;
        q.push({i, j});

        while(!q.empty()){
          int y = q.front().first;
          int x = q.front().second;
          q.pop();

          for(int k = 0; k < 4; k++){
            int ny = y + dy[k];
            int nx = x + dx[k];
            if(ny >= 0 && nx >= 0 && ny < n && nx < n){
              if(board[ny][nx] == 'G' && !isvisited[ny][nx]){
                isvisited[ny][nx] = true;
                q.push({ny, nx});
              }
            }
          }
        }
        cnt++;
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(board[i][j] == 'R' && !isvisited[i][j]){
        isvisited[i][j] = true;
        q.push({i, j});

        while(!q.empty()){
          int y = q.front().first;
          int x = q.front().second;
          q.pop();

          for(int k = 0; k < 4; k++){
            int ny = y + dy[k];
            int nx = x + dx[k];
            if(ny >= 0 && nx >= 0 && ny < n && nx < n){
              if(board[ny][nx] == 'R' && !isvisited[ny][nx]){
                isvisited[ny][nx] = true;
                q.push({ny, nx});
              }
            }
          }
        }
        cnt++;
      }
    }
  }
}

void RGbfs(){ // 적녹색약
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(board[i][j] == 'B' && !RGisvisited[i][j]){
        RGisvisited[i][j] = true;
        q.push({i, j});

        while(!q.empty()){
          int y = q.front().first;
          int x = q.front().second;
          q.pop();

          for(int k = 0; k < 4; k++){
            int ny = y + dy[k];
            int nx = x + dx[k];
            if(ny >= 0 && nx >= 0 && ny < n && nx < n){
              if(board[ny][nx] == 'B' && !RGisvisited[ny][nx]){
                RGisvisited[ny][nx] = true;
                q.push({ny, nx});
              }
            }
          }
        }
        RGcnt++;
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(board[i][j] != 'B' && !RGisvisited[i][j]){
        RGisvisited[i][j] = true;
        q.push({i, j});

        while(!q.empty()){
          int y = q.front().first;
          int x = q.front().second;
          q.pop();

          for(int k = 0; k < 4; k++){
            int ny = y + dy[k];
            int nx = x + dx[k];
            if(ny >= 0 && nx >= 0 && ny < n && nx < n){
              if(board[ny][nx] != 'B' && !RGisvisited[ny][nx]){
                RGisvisited[ny][nx] = true;
                q.push({ny, nx});
              }
            }
          }
        }
        RGcnt++;
      }
    }
  }
}

int main(){
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> s[i];
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      board[i][j] = s[i][j];
    }
  }
  bfs();
  RGbfs();
  cout << cnt << " " <<  RGcnt << endl;

  return 0;
}
