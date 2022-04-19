#include <iostream>

using namespace std;

long long gcd(long long a, long long b){
  if(b == 0)return a;
  else{
    return gcd(b, a%b);
  }
}

long long lcm(long long a, long long b){
  return a * b / gcd(a, b);
}

int main(){
  int k, n;
  long long answer = 1;
  cin >> k >> n;

  for(int i = 0; i < n; i++){
    long long temp;
    cin >> temp;
    answer = lcm(answer, temp);
  }

  cout << answer - k << "\n";

  return 0;
}
