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

string s[5];
char arr[25];
bool isused[25];
int ans[8];
int anscnt = 0;

bool isvisited[25];
queue<int> q;

bool chk(){
  int cnt = 0;
  for(int i = 1; i <= 7; i++){
    if(arr[ans[i]] == 'S') cnt++;
  }
  if(cnt >= 4) return true;
  else return false;
}


bool adjacent(){
  for(int i = 0; i < 25; i++){
    isvisited[i] = 0;
  }
  isvisited[ans[1]] = true;
  q.push(ans[1]);

  while(!q.empty()){
    int idx = q.front();
    q.pop();

    for(int i = 1; i <= 7; i++){
      if(!isvisited[ans[i]]){
        if((ans[i] - idx == 1 && idx/5 == ans[i]/5) || (ans[i] - idx == -1 && idx/5 == ans[i]/5) || ans[i] - idx == 5 || ans[i] - idx == -5){
          isvisited[ans[i]] = true;
          q.push(ans[i]);
        }
      }
    }
  }
  int cc = 0;
  for(int i = 0; i < 25; i++){
    if(isvisited[i]) cc++;
  }
  if(cc == 7) return true;
  return false;

}

void bktk(int k){
  if(k == 7){
    if(adjacent() && chk()){
      anscnt++;
    }
    return;
  }
  for(int i = 0; i < 25; i++){
    if(!isused[i] && ans[k] <= i){
      isused[i] = 1;
      ans[k+1] = i;
      bktk(k+1);
      isused[i] = 0;
    }
  }
}

int main(){
  for(int i = 0; i < 5; i++){
    getline(cin,s[i]);
  }

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      arr[5*i+j] = s[i][j];
    }
  }

  bktk(0);
  cout << anscnt << endl;

  return 0;
}
