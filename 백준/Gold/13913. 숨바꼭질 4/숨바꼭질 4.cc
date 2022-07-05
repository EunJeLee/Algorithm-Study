#include <iostream>
#include <queue>
#include <algorithm>
#define endl '\n'

using namespace std;
int N, K;
bool visited[100001];
int parent[100001];
queue<pair<int, int>> q;

void input(){
  cin >> N >> K;
}

void solve(){
  vector<int> v;
  v.push_back(N);
  visited[N] = true;
  q.push({N, 0});

  while(!q.empty()){
    int idx = q.front().first;
    int dist = q.front().second;
    q.pop();

    if(idx == K){
      cout << dist << endl;
      int temp = idx;
      vector<int> v;
      while(temp != N){
        v.push_back(parent[temp]);
        temp = parent[temp];
      }
      for(int i = 0; i < v.size(); i++){
        cout << v[v.size()-i-1] << " ";
      }cout << K << endl;
    }

    if(idx - 1 >= 0 && idx - 1 < 100001){
      if(!visited[idx-1]){
        parent[idx-1] = idx;
        visited[idx-1] = true;
        q.push({idx-1, dist+1});
      }
    }

    if(idx + 1 >= 0 && idx + 1 < 100001){
      if(!visited[idx+1]){
        parent[idx+1] = idx;
        visited[idx+1] = true;
        q.push({idx+1, dist+1});
      }
    }

    if(2*idx < 100001){
      if(!visited[2*idx]){
        parent[2*idx] = idx;
        visited[idx*2] = true;
        q.push({idx*2, dist+1});
      }
    }

  }
}

int main(){
  input();
  solve();

  return 0;
}
