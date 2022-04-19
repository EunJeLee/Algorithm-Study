#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


  int T, N, M;
  scanf("%d",&T);

  while(T--){
    vector<int> v1;
    scanf("%d",&N);

    for(int i = 0; i < N; i++){
      int temp;
      scanf("%d",&temp);
      v1.push_back(temp);
    }

    sort(v1.begin(), v1.end());

    scanf("%d",&M);

    for(int i = 0; i < M; i++){
      int temp;
      scanf("%d", &temp);
      int a = 0, b = v1.size() - 1;
      bool cpzm = false;

      while(b - a >= 0){
        int mid = (a + b) / 2;
        if(temp == v1[mid]){
          printf("1\n");
          cpzm = true;
          break;
        }
        else if(temp > v1[mid]){
          a = mid + 1;
        }
        else if(temp < v1[mid]){
          b = mid - 1;
        }
      }
      if(!cpzm) printf("0\n");
    }
  }
  return 0;
}
