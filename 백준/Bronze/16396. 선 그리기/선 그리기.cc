#include <iostream>

using namespace std;

int arr[10001];

int main(){
  int N, ans = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;
    for(int j = a; j < b; j++){
      arr[j] = 1;
    }
  }
  for(int i = 1; i <= 10000; i++){
    if(arr[i]) ans++;
  }

  cout << ans << "\n";

  return 0;
}
