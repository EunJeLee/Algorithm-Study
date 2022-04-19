#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  int n , m;

  while(t--){
    cin >> n >> m;
    long long int temp = 1;
    for(int i = n ; i < m; i++){
      temp = temp * (i + 1) / (i - n + 1);
    }

    cout << temp << "\n";
  }
}
