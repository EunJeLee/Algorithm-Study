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
#include <typeinfo>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define pb push_back
#define mp make_pair

using namespace std;

int main(){
  FASTIO()
  deque<int> dq;

  int N, M, index, temp;
  int diff1, diff2;
  int count = 0;
  cin >> N;

  for(int i = 1; i <= N; i++){
    dq.pb(i);
  }

  cin >> M;

  for(int i = 0; i < M; i++){
    cin >> temp;
    for(int j = 0; j < dq.size(); j++){
      if(dq[j] == temp){
        diff1 = j;
        diff2 = dq.size() - j;
        if(diff1 <= diff2){
          for(int k = 0; k < diff1; k++){
            dq.push_back(dq.front());
            dq.pop_front();
            count++;
          }
        }
        else if(diff1 > diff2){
          for(int k = 0; k < diff2; k++){
            dq.push_front(dq.back());
            dq.pop_back();
            count++;
          }
        }
        dq.pop_front();
      }
    }
  }
  cout << count << endl;

  return 0;
}
