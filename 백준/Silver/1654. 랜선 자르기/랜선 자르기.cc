#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v;

int main(){
  int k, n;

  cin >> k >> n;

  for(int i = 0; i < k; i++){
    long long line;
    cin >> line;
    v.push_back(line);
  }
  sort(v.begin(),v.end());

  long long a = 1, b = v[k - 1];
  long long ans = 0;
  long long Mid = 0;

  while(b - a >= 0){
    Mid = (a + b) / 2;
    long long sum = 0;
    for(int i = 0; i < v.size(); i++){
      sum += v[i]/Mid;
    }
    if(sum >= n){
      a = Mid + 1;
      ans = Mid;
    }
    else b = Mid - 1;

  }
  cout << ans << "\n";
}
