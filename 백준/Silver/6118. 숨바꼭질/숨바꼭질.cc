#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#define pb push_back
#define mp make_pair

using namespace std;


vector<int> node[20001];
int len[20001];
queue<pair<int, int>> q;
// map<int, int> m;
// int ans1 = -1;
// int ans2;
// int cnt = 0;

void bfs(){
  q.push({1, 0});
  len[1] = 0;
  while(!q.empty()){
    int pos = q.front().first;
    int move = q.front().second;
    q.pop();

    for(int i = 0; i < node[pos].size(); i++){
      int next = node[pos][i];
      int add = move + 1;
      if(next == 1) continue;
      else{
        if(len[next] == 0){
          len[next] = add;
          q.push({next, add});
        }
        else if(len[next] > add){
            len[next] = add;
            q.push({next, add});

        }
      }
    }
  }
}


int main(){
  int n, m;

  cin >> n >> m;

  for(int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;

    node[x].pb(y);
    node[y].pb(x);
  }

  bfs();
  int ans = -1;
  int count = 0;
  int ans2;
  for(int i = 1; i <= n; i++){
    if(ans < len[i]){
      count = 1;
      ans2 = i;
      ans = len[i];
    }
    else if(ans == len[i])count++;
  }
  cout << ans2 << " " << ans << " " << count << "\n";
  // for(int i = 1; i <= n; i++) cout << "node" << i << ": " << len[i] << "\n";

  return 0;
}
