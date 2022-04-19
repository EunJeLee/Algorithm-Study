#include <iostream>

using namespace std;

int island[51][51] = {0};
bool check[51][51] = {0};
int dx[8] = {1,0,-1,0,-1,1,-1,1};
int dy[8] = {0,1,0,-1,1,1,-1,-1};

void bfs(int x, int y){
  check[x][y] = true;
  for(int i = 0; i < 8; i++){
    if(check[x + dx[i]][y + dy[i]] == 0 && island[x + dx[i]][y + dy[i]] == 1){
      bfs(x + dx[i], y + dy[i]);
    }
  }
}

int main(){
  int w , h;


  while(true){
    int c = 0;
    for(int i =0; i < 51; i++){
      for(int j = 0; j < 51; j++){
        check[i][j] = 0;
        island[i][j] = 0;
      }
    }
    cin >> w >> h;
    //종료조건 //
    if(w == 0 && h == 0)break;

    // 입력 //
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        int p;
        cin >> p;
        island[i][j] = p;
      }
    }

    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        if(check[i][j] == 0 && island[i][j] == 1){
          bfs(i,j);
          c++;
        }
      }
    }
    cout << c << "\n";
  }
  return 0;
}
