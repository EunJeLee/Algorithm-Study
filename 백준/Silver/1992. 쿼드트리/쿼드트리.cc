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

int board[65][65];

bool chk(int y, int x, int n){
  int fst = board[y][x];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(board[y+i][x+j] != fst) return false;
    }
  }
  return true;
}

void quad_tree(int y, int x, int n){
  if(chk(y, x, n)){
    cout << board[y][x];
    return;
  }
  else {
    cout << "(";
    int half = n / 2;
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 2; j++){
        quad_tree(y+i*half, x+j*half, half);
      }
    }
    cout << ")";
  }
}

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      char tmp;
      cin >> tmp;
      board[i][j] = tmp - '0';
    }
  }
  quad_tree(0, 0, n);
  cout << endl;
  return 0;
}
