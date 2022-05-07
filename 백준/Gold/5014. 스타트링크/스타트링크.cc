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

bool isvisited[1000001];
int dist[1000001];
int F, S, G, U, D;

queue<int> q;

int bfs(){
  q.push(S);
  isvisited[S] = true;
  dist[S] = 0;

  while(!q.empty()){
    int y = q.front();
    if(y == G) return dist[y];
    q.pop();

    int dy[2] = {U, -D};
    for(int i = 0; i < 2; i++){
      int ny = y + dy[i];

      if(ny >= 1 && ny <= F){
        if(!isvisited[ny]){
          dist[ny] = dist[y] + 1;
          isvisited[ny] = true;
          q.push(ny);
        }
      }
    }

  }
  return -1;
}

int main(){
  cin >> F >> S >> G >> U >> D;
  int result = bfs();

  if(result == -1) cout << "use the stairs\n";
  else cout << result << endl;


}
