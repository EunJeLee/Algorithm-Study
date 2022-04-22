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

int board[129][129];
int ans[2];


bool chk(int y, int x, int n){
  int fst = board[y][x];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(board[y+i][x+j] != fst) return false;
    }
  }
  return true;
}

void make_paper(int y, int x, int n){
  if(chk(y, x, n)){
    ans[board[y][x]]++;
    return;
  }
  else {
    int half = n / 2;
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
        make_paper(y+i*half, x+j*half, half);
      }
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

  make_paper(0, 0, n);
  for(int i = 0; i < 2; i++){
    cout << ans[i] << endl;
  }

  return 0;
}
