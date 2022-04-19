#include <iostream>
using namespace std;

int main(){
  int input;

  cin >> input;

  if(input < 3){
    cout << -1 << "\n";
  }
  else{
    if(input == 4 || input == 7){
      cout << -1;
    }
    else if((input % 5) % 3 == 0){
      cout << ((input / 5) + ((input % 5) / 3)) << "\n";
    }
    else if((input % 5) % 3 == 1){
      cout << ((input / 5) - 1) + (((input % 5) + 5) / 3) << "\n";
    }
    else if((input % 5) % 3 == 2){
      cout << ((input / 5) - 2) + (((input % 5) + 10) / 3) << "\n";
    }
    else{
      cout << -1 << "\n";
    }
  }
}
