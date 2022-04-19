#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> v;

// Parenthesis String(괄호 문자)

int main(){
  int count, check = 0;
  string stc;
  cin >> count;
  getline(cin, stc);

for(int i = 0; i < count; i++){
    getline(cin, stc);
      for(int i = 0; i < stc.length(); i++){
        if(stc[i] == '('){
          v.push_back(stc[i]);
        }
        if(stc[i] == ')'){
          if(v.empty()){
            check = 0;
            break;
          }
          else if(v.back() == '('){
            v.pop_back();
            check = 1;
          }
          else{
            check = 0;
            break;
          }
        }
      }
      if(v.empty() && check == 1){
        cout << "YES" << "\n";
      }
      else{
        cout << "NO" << "\n";
        v.clear();
      }
      stc.clear();
  }
  return 0;
}
