#include <iostream>
#include <algorithm>
#include <memory.h>
#include <random>
#include <unordered_map>
#include <math.h>
#include <string>
#include <cstring>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <set>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair
#define MAX 100001

using namespace std;
queue<pair<int, int>> q;
int visited[MAX];
int cnt;
int min_cost;

int bfs(int n, int k){
  visited[n] = 1;
  q.push({n, 0});

  while(!q.empty()){
    int pos = q.front().first;
    int cost = q.front().second;

    q.pop();

    visited[pos] = 1;


    if(!min_cost && pos == k){
      min_cost = cost;
      cnt++;
    }
    if(cnt && min_cost == cost && pos == k) cnt++;



    if(pos*2 < MAX && !visited[pos*2]){
      q.push({pos*2, cost+1});
    }

    if(pos -1 >= 0 && !visited[pos-1]){
      q.push({pos-1, cost+1});
    }

    if(pos+1 < MAX && !visited[pos+1]){
      q.push({pos+1, cost+1});
    }
  }
  return min_cost;
}

int main(){
  int n, k;
  cin >> n >> k;

  cout << bfs(n, k) << endl << cnt -1 << endl;

  return 0;
}
