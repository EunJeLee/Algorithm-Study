#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

vector<signed> v;

int main(){
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    signed temp;
    cin >> temp;
    v.push_back(temp);
  }
  sort(v.begin(), v.end());

  cout << v[0] << " " << v[n-1] << "\n";
}
