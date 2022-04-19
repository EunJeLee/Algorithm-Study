#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> v;

int main(){
  while(true){
    int check = 1;
    string stc;
    getline(cin, stc);
    if(stc[0] == '.'){
      break;
    }

    for(int i = 0; i < stc.length(); i++){
      if(stc[i] == '[' || stc[i] == '('){
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

      else if(stc[i] == ']'){
        if(v.empty()){
          check = 0;
          break;
        }
        else if(v.back() == '['){
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
      cout << "yes" << "\n";
    }
    else{
      cout << "no" << "\n";
      v.clear();
    }

  }
  return 0;
  }
