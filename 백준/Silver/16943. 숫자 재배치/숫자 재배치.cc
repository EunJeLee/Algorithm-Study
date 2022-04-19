#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

deque<int> d, a;

int main(){
  int A , B;
  int max  = 0;
  int temp;

  cin >> A >> B;

  while(A / 10 != 0){
    d.push_front(A%10);
    A /= 10;
  }
  d.push_front(A);

  sort(d.begin(), d.end());

  do{
    int sum = 0, count = 0;
    int d_size = d.size();
    for(int i = 0; i < d_size; i++){
      if(d[0] != 0){
        sum += d[i];
        count++;
        if(count != d_size){ //자리수 만드는거 처리해주기 여기가 문제
          sum *= 10;
        }
      }
    }
      if(sum <= B && max <= sum){ // 789 123넣었을 때 마지막에 90 나오는 이유 확인!
          max = sum;
      }

  }while(next_permutation(d.begin(), d.end()));


    if(max != 0){
      cout << max << "\n";
    }
    else{
      cout << -1 << "\n";
    }

}
