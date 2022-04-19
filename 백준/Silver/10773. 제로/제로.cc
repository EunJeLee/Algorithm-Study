#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> s;
  int count;
  cin >> count;

  for(int i = 0; i < count; i++){
    int n;
    cin >> n;
    if(n != 0){
      s.push(n);
    }
    else if(n == 0){
      s.pop();
    }
  }

  int sum = 0;
  int abc = s.size();
  for(int i = 0; i < abc; i++){
    sum += s.top();
    s.pop();
  }

  cout << sum << "\n";


  return 0;
}
