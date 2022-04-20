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

int board[2188][2188];
int ans[3] = {0};

bool cnt(int y, int x, int ptt){
  int inivalue = board[y][x];
  for(int i = 0; i < ptt; i++){
    for(int j = 0; j < ptt; j++){
      if(board[y+i][x+j] != inivalue) return false;
    }
  }
  return true;
}

void count_paper(int y, int x, int n){
    if(cnt(y, x, n)){
      ans[board[y][x]+1]++;
      return;
    }
    int pt = n / 3;
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        count_paper(y+pt*i, x+pt*j, pt);

      }
    }
}

int main(){
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> board[i][j];
    }
  }
    count_paper(0, 0, n);

  for(int i = 0; i < 3; i++){
    cout << ans[i] << endl;
  }

  return 0;
}
