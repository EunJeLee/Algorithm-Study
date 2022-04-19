#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main(){
  long long N, M;
  cin >> N >> M;

  for(int i = 0; i < N; i++){
    long long temp;
    cin >> temp;
    v.push_back(temp);
  }
  sort(v.begin(), v.end());

  long long a = 1, b = v[N - 1];
  long long ans = 0;
  long long mid = 0;

  while(b - a >= 0){
    mid = (a + b) / 2;
    long long sum = 0;
    for(int i = 0; i < N; i++){
      if(v[i] >= mid){
        sum += v[i] - mid;
      }
    }
    if(sum >= M){
      a = mid + 1;
      ans = mid;
    }
    else b = mid  - 1;
  }
  cout << ans << "\n";
  return 0;
}
