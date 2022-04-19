#include <iostream>

using namespace std;

long long v[300001] = {0};

int main(){
  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> v[i];
  }

  long long sum = v[N-1];
  for(int i = N-2; i >= 0; i--){
    if(sum % v[i] == 0) sum = v[i] * (sum / v[i]);
    else sum = v[i] * (sum / v[i] + 1);
  }
  cout << sum << "\n";
  return 0;
}
