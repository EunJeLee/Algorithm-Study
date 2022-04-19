#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string arr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(){
  string str;
  int index = 0, ans = 0;
  cin >> str;

  for(int j = 0; j < str.length(); j++){
    for(int i = 0; i < arr.length(); i++){
      if(str[j] == arr[i]){
        if(abs(i - index) > 13) ans += (26 - abs(i - index));
        else ans += abs(i - index);
        index = i;
      }
    }
  }
  cout << ans << "\n";
  return 0;
}
