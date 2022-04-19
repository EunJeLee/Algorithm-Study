#include <iostream>

using namespace std;

char arr[501][501];
int count[501] = {0,};
int count2[501] = {0,};

int main(){
  int N, M;
  int up = 0, down = 0, left = 0, right = 0;
  cin >> N >> M;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> arr[i][j];
    }
  }

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      if(arr[i][j] == '#'){
        count[i]++;
      }
    }
    //cout << "count[" << i << "] : " << count[i] << "\n";
  }

  if(count[0] != 0) up = count[0];
  if(count[N-1] != 0) down = count[N-1];

  if(up == 0){
    for(int i = 1; i <= N-1; i++){
      if(count[i-1] == 0 && count[i] != 0){
        up = count[i];
        break;
      }
    }
  }
  if(down == 0){
    for(int i = 1; i <= N-1; i++){
        if(count[i-1] != 0 && count[i] == 0){
            down = count[i-1];
            break;
        }
    }
  }
  //cout << "up : " << up << "down : " << down << "\n";

  if(up > down){
    cout << "DOWN" << "\n";
    return 0;
  }
  else if(up < down){
    cout << "UP" << "\n";
    return 0;
  }
  else{
    for(int i = 0; i < M; i++){
      for(int j = 0; j < N; j++){
        if(arr[j][i] == '#') count2[i]++;
      }
      //cout << "count2[" << i << "] : " << count2[i] << "\n";
    }
    if(count2[0] != 0) left = count2[0];
    if(count2[M-1] != 0) right = count2[M-1];

    if(left == 0){
      for(int i = 1; i <= M-1; i++){
        if(count2[i-1] == 0 && count2[i] != 0){
          left = count2[i];
          break;
        }
      }
    }
    if(right == 0){
      for(int i = 1; i <= M-1; i++){
        if(count2[i-1] != 0 && count2[i] == 0){
          right = count2[i-1];
          break;
        }
      }
    }
    //cout << "left : " << left << "right : " << right << "\n";
    if(left > right){
      cout << "RIGHT" << "\n";
      return 0;
    }
    else{
      cout << "LEFT" << "\n";
      return 0;
    }
  }
}
