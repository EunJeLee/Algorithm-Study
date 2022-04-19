#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string tmp[1001];

bool comp(string a, string b){
  if(a.length() < b.length()) return 1;
  else if(a.length() > b.length()) return 0;
  else{
    int sum_a = 0, sum_b = 0;

    for(int i = 0; i < a.length(); i++){
      if('0' <= a[i] && a[i] <= '9') sum_a += a[i] - '0';
      if('0' <= b[i] && b[i] <= '9') sum_b += b[i] - '0';
    }
    if(sum_a < sum_b) return 1;
    else if(sum_a > sum_b) return 0;
    else{
      return a < b;
    }
  }
}

int main(){
  int N;
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> tmp[i];
  }
  sort(tmp, tmp + N, comp);

  for(int i = 0; i < N; i++) cout << tmp[i] << "\n";


  return 0;
}
