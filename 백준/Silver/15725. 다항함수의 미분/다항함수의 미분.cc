#include <iostream>
#include <string>

using namespace std;

int main(){
  string s;
  cin >> s;

  for(int i = 0; i < s.length(); i++){
    if(s[i] == 'x' && i == 0){
      cout << "1" << "\n";
      return 0;
    }
    else if(s[i] == 'x' && i != 0){
      if(s[i-1] == '-'){
        cout << "-1" << "\n";
        return 0;
      }
      else{
        cout << s.substr(0,i) << "\n";
        return 0;
      }
    }
  }
  cout << 0 << "\n";
  return 0;
}
