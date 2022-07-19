#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[1001];

void input(){
  int sum = 0;
  for(int i = 0; i < 10; i++){
    int tmp;
    cin >> tmp;
    arr[tmp] += 1;
    sum += tmp;
  }

  int max = -1;
  int idx;
  for(int i = 0; i < 1001; i++){
    if(arr[i] > max){
      max = arr[i];
      idx = i;
    }
  }

  cout << sum/10 << endl << idx << endl;

}


int main(){
  input();

  return 0;
}
