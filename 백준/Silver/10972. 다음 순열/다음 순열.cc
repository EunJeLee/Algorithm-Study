#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> check;

int main(){
  int N;
  int n;
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> n;
    check.push_back(n);
  }

  if(next_permutation(check.begin(), check.end()) == 1){
    while(1){for(int i = 0; i < N; i++){
      cout << check[i] << " ";
    }
    break;
  }
  }
  else{
    cout << -1 << "\n";
  }
  }
