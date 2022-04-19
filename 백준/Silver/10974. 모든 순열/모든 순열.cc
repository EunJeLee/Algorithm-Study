#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> check;

int main(){
  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    check.push_back(i+1);
  }

  do{
    for(int i = 0; i < N; i++){
      cout << check[i] << " ";
    }
    cout << "\n";

  }
  while(next_permutation(check.begin(),check.end()));
}
