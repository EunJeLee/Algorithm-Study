#include <iostream>

using namespace std;

int main(){
  int num, num_1;
  int temp, next;

  cin >> num;
  num_1 = num;
  for(int i = 0; i < 99999; i++){
    temp = num_1 / 10 + num_1 % 10;
    next = num_1 % 10 * 10 + temp % 10;
    if(next == num){
      cout << i + 1 << "\n";
      break;
    }
    num_1 = next, temp = 0;
  }


}
