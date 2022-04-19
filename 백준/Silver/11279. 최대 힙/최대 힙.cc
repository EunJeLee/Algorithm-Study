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

using namespace std;

int main(){
  FASTIO()
  priority_queue<int> pq;

  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    unsigned int temp;
    cin >> temp;

    if(temp == 0){
      if(pq.empty()) cout << 0 << endl;
      else{
        cout << pq.top() << endl;
        pq.pop();
      }
    }
    else{
      pq.push(temp);
    }
  }
  return 0;
}
