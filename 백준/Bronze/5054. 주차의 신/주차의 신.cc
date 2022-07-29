#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void solve(){
  int n;
  int arr[100] = {0,};
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  sort(arr, arr+n);
  int cst = 0;
  for(int i = 0; i < n-1; i++){
    cst += arr[i+1] - arr[i];

  }

  int min = 100000000;
  for(int i = 0; i < 100; i++){
    int dist = abs(i-arr[0]) + abs(i-arr[n-1]);
    if(dist < min) min = dist;
  }

  cout << min + cst << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    solve();
  }

  return 0;
}
