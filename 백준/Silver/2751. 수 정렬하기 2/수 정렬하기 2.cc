#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> v;
  int count;

  cin >> count;

  for(int i = 0; i < count; i++){
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(),v.end());

  for(int i = 0; i < count; i++){
    cout << v[i] << "\n";
  }
}
