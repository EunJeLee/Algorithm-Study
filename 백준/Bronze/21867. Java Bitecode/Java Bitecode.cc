#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <char> v;

int main(){
  int N, length = 0;
  string str;

  cin >> N >> str;

  for(int i = 0; i < str.length(); i++){
    if(str[i] == 'A' || str[i] == 'J' || str[i] == 'V'){
      N--;
    }
    else v.push_back(str[i]);
  }
  if(N != 0){
    for(int i = 0; i < N; i++){
      cout << v[i];
    }
    cout << "\n";
  }
  else cout << "nojava" << "\n";

  return 0;
}
