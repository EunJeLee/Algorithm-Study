#include <iostream>
#include <queue>
#include <utility>

using namespace std;

queue<pair<int, int> > q;

int box[1001][1001];
int m, n , zero = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int bfs(){
  int ans = 0;
  while(!q.empty()){
    pair<int, int> curr = make_pair(q.front().first, q.front().second);
    q.pop();
    for(int i = 0; i < 4; i++){
      int sumx = curr.first + dx[i];
      int sumy = curr.second + dy[i];
      if(sumx >= 0 && sumy >= 0 && sumx < n && sumy < m){ // 범위가 아주중요 //
        if(box[sumx][sumy] == 0){
          q.push(make_pair(sumx, sumy));
          box[sumx][sumy] = box[curr.first][curr.second] + 1;
          zero--;
          ans = max(box[sumx][sumy], ans);
        }
      }
    }
  }
  return zero > 0 ? -1 : ans - 1;
}

int main(){
  cin >> m >> n;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> box[i][j];
      if(box[i][j] == 0){
        zero++;
      }
      else if(box[i][j] == 1){
        q.push(make_pair(i, j));
      }
    }
  }

  if(zero == 0){ // 모두 익은 상태 //
    cout << 0 << "\n";
  }
  else{
    cout << bfs() << "\n";
  }
  return 0;
}
