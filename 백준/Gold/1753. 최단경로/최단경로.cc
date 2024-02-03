#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF 2100000000
#define endl "\n"

using namespace std;
vector<vector<pair<int,int> > > cost(20005);

int main(){
  FASTIO()
  int v, e, root;
  cin >> v >> e >> root;
// 플로이드 : 1 -> 5 3- >5
// 다익스트라 : dijk(1), 3->5 2->4  1->asdasd?
  for(int i = 0; i < e; i++){
    int u, v, w;
    cin >> u >> v >> w;
    cost[u].push_back(make_pair(v, w));
  }
  int dist[v+1];
  dist[root] = 0;

  for(int i = 1; i <= v; i++){
    if(i!=root) dist[i] = INF;
  }

  priority_queue<pair<int, int> > pq; // 거리, 정점, default : max heap
  pq.push(make_pair(0, root));

  while(!pq.empty()) {
    int cur_node = pq.top().second;
    int cur_dist = -pq.top().first;
    pq.pop();
    if(dist[cur_node] < cur_dist) continue;
    for(int i = 0 ; i < cost[cur_node].size() ; i++) {
      int next = cost[cur_node][i].first;
      int cst = cost[cur_node][i].second;
      if(dist[next] > cur_dist + cst) {
        dist[next] = cur_dist + cst;
        pq.push(make_pair(-(cur_dist+cst), next));
      }
    }
  }
  for(int i = 1 ; i <= v ; i++) {
    if(dist[i] == INF) cout << "INF\n";
    else cout << dist[i] << endl;
  }

  return 0;
}
