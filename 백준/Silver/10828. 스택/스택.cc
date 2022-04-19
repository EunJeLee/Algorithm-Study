#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
  stack<int> s;

  int count;

  cin >> count;

  for(int i = 0; i < count; i++){
    string com;
    cin >> com;

    if(com == "size"){
      cout << s.size() << "\n";
    }
    else if(com == "empty"){
      cout << s.empty() << "\n";
    }
    else if(com == "top"){
      cout << (s.empty() ? -1 : s.top()) << "\n";
    }
    else if(com == "pop"){
      cout << (s.empty() ? -1 : s.top()) << "\n";
      if(!s.empty()){
        s.pop();
      }
    }
    else if(com == "push"){
      int a;
      cin >> a;
      s.push(a);
    }
  }
}
