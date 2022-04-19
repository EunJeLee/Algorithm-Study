#include <iostream>
#include <deque>
using namespace std;

deque<int> d;

int main(){
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    d.push_back(i+1);
  }
  for(int i = 0; i < n-1; i++){
    d.pop_front();
    d.push_back(d.front());
    d.pop_front();
  }

  cout << d.front() << "\n";
}
