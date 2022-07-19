#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

void input(){
  int in, out, sum = 0;

  for(int i = 0; i < 10; i++){
    cin >> out >> in;
    sum = sum + in - out;
    v.push_back(sum);
  }

  sort(v.rbegin(), v.rend());

  cout << v[0] << endl;
}


int main(){
  input();

  return 0;
}
