#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v, temp;

int ABS(int a, int b){
  return ((a > b) ? (a - b) : (b - a));
}

int main(){
  int N, n, max = 0, sum = 0;
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> n;
    v.push_back(n);
  }

  sort(v.begin(),v.end());

  do{
    for(int i = 0; i < N - 1; i++){
      sum += ABS(v[i],v[i+1]);
    }
    if(max < sum){
      max = sum;
    }
    sum = 0;

  }
  while(next_permutation(v.begin(),v.end()));

  cout << max << "\n";



}
