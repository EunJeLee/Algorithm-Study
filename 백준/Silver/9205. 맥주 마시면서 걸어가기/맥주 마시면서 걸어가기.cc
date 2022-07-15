#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
#include <cstring>
#define endl '\n'

using namespace std;

bool distance_check(int x1, int y1, int x2, int y2){
  int distance =  abs(x1 - x2) + abs(y1 - y2);
  if(distance <= 1000) return true;
  return false;
}


void input(){
  int N;
  int src_y, src_x;
  int dest_y, dest_x;
  queue<pair<int, int>> q;
  vector<pair<int, int>> store; // 모든 편의점의 pos 입력
  bool visited[101]; // N개의 편의점 방문 여부 확인을 위한 확인 배열
  memset(visited, false, sizeof(visited));

  cin >> N;
  cin >> src_x >> src_y;

  for(int i = 0; i < N; i++){
    int x, y;
    cin >> x >> y;
    store.push_back({x, y});
  }
  cin >> dest_x >> dest_y;

  q.push({src_x, src_y}); // 출발지에서 편의점 전부 돌면서 갈 수 있는 곳 확인을 시작

  while(!q.empty()){
    int x1 = q.front().first;
    int y1 = q.front().second;
    q.pop();

    if(distance_check(x1, y1, dest_x, dest_y)){ // q.front()의 pos에서 festival pos로 이동가능하면 happy 출력
      cout << "happy\n";
      return;
    }

    for(int i = 0; i < N; i++){ // i번째 편의점 탐색
      int x2 = store[i].first;
      int y2 = store[i].second;

      if(!visited[i] && distance_check(x1, y1, x2, y2)){ // 방문한 적 없고 이동할 수 있는 거리이면
        visited[i] = true;
        q.push({x2, y2}); // 방문처리 후 queue에 push
      }
     }
  }
  cout << "sad\n"; // q가 비도록 도착하지 못했다면 sad 출력
  return;
}

void repeat(){
  int T;
  cin >> T;
  while(T--){
    input();
  }
}


int main(){
  repeat();
  return 0;
}
