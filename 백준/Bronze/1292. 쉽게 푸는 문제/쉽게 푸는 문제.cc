#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int a, b;

int arr[1001];

void input(){
  cin >> a >> b;
}

void solve(){

  int n = 1;
  if(a==1 && b == 1){
    cout << 1 << endl;
    return;
  }
  else{
    while(1){
      if(n*(n+1)/2 < b && b <= (n+1)*(n+2)/2){
        break;
      }
      n++;
    }


    int sum = 0;
    for(int i = 1; i <= n+1; i++){
      for(int j = 1 ; j <= i; j++){
        arr[(i-1)*i/2+j] = i;
      }
    }


    for(int i = a; i <= b; i++){
      sum += arr[i];
    }

    cout << sum << endl;

  }
}

int main(){
  input();
  solve();

  return 0;
}
