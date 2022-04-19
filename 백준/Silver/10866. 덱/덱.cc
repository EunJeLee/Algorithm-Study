#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(){
  deque<int> d;
  int count;
  cin >> count;

  for(int i = 0; i < count; i++){
    string com;
    cin >> com;

    if(com == "push_back"){
      int a;
      cin >> a;
      d.push_back(a);
    }

    else if(com == "push_front"){
      int a;
      cin >> a;
      d.push_front(a);
    }

    else if(com == "empty"){
      cout << d.empty() << "\n";
    }

    else if(com == "front"){
      cout << (d.empty() ? -1 : d.front()) << "\n";
    }

    else if(com == "back"){
      cout << (d.empty() ? -1 : d.back()) << "\n";
    }

    else if(com == "size"){
      cout << d.size() << "\n";
    }

    else if(com == "pop_front"){
      cout << (d.empty() ? -1 : d.front()) << "\n";
      if(!d.empty()){
        d.pop_front();
      }
    }

    else if(com == "pop_back"){
      cout << (d.empty() ? -1 : d.back()) << "\n";
      if(!d.empty()){
        d.pop_back();
      }
    }

  }
}
