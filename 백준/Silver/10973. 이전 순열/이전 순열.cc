#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> check;

int main(){
  int N, n;
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> n;
    check.push_back(n);
  }

  if(prev_permutation(check.begin(),check.end()) == 1){
    while(1){
      for(int i = 0; i < N; i++){
        cout << check[i] << " ";
      }
      break;
    }
  }
  else{
    cout << -1 << "\n";
  }
}
