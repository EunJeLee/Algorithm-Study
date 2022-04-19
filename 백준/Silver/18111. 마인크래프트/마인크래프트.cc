#include <iostream>

using namespace std;

#define INF 300

int land[501][501];

int main(){
  int N, M, item;
  int min = INF, max = 0;
  int height = 0;
  int time = 2100000000;
  cin >> N >> M >> item;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> land[i][j];
      if(land[i][j] < min)min = land[i][j];
      if(land[i][j] > max)max = land[i][j];
    }
  }

  for(int k = min; k <= max; k++){
    int sub_time = 0;
    int my_item = item;
    for(int i = 0; i < N; i++){
      for(int j = 0; j < M; j++){
        if(land[i][j] - k > 0){
          my_item += (land[i][j] - k);
          sub_time += 2 * (land[i][j] - k);
        }
        else if(land[i][j] == k) continue;
        else{
          my_item -= (k - land[i][j]);
          sub_time += 1 * (k - land[i][j]);
        }
      }
    }
    if(my_item < 0){
      break;
    }
    if(time >= sub_time){
      time = sub_time;
      height = k;
    }
  }

  cout << time << " " << height << "\n";
  //최소부터 최대 가능 높이 경우 비교





  return 0;
}
