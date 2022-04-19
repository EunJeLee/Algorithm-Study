#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
  queue<int> q;

  int count;
  cin >> count;

  for(int i = 0 ; i < count; i++){
    string com;
    cin >> com;
    
    if(com == "push"){
      int a;
      cin >> a;
      q.push(a);
    }

    else if(com == "empty"){
      cout << q.empty() << "\n";
    }

    else if(com == "front"){
      cout << (q.empty() ? -1 : q.front()) << "\n";
    }

    else if(com == "back"){
      cout << (q.empty() ? -1 : q.back()) << "\n";
    }

    else if(com == "size"){
      cout << q.size() << "\n";
    }

    else if(com == "pop"){
      cout << (q.empty() ? -1 : q.front()) << "\n";
      if(!q.empty()){
        q.pop();
      }
    }
  }
}
