#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  int T;
  cin >> T;


  for(int i = 0; i < T; i++){
    int n;
    cin >> n;
    string v[10001];
    for(int j = 0; j < n; j++){
      cin >> v[j];
    }
    sort(v, v + n);
    int check = 1;
    for(int j = 1; j < n; j++){
      int len = v[j-1].length();
      int sum = 0;
      for(int k = 0; k < len; k++){
        if(v[j-1][k] == v[j][k]) sum++;
      }
      if(sum == len){
         cout << "NO" << "\n";
         check = 0;
         break;
      }
    }
    if(check == 1) cout << "YES" << "\n";
  }

  return 0;
}
