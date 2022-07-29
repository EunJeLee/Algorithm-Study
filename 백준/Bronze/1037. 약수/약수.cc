#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

void input(){
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }

  sort(v.begin(), v.end());
  cout << v[0] * v[n-1] << endl;

}


int main(){
  input();

  return 0;
}
