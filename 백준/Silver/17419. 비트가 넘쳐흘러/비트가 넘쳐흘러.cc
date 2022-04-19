#include <iostream>
#include <string>

using namespace std;


// 연산 1번 진행하면 이진수의 가장 낮은 자릿수 1이 사라진다. 따라서 (연산수) == (1의 개수)
int main(){
  int N, ans = 0;
  string str;
  cin >> N >> str;

  for(int i = 0; i < str.length(); i++){
    if(str[i] == '1') ans++;
  }
  cout << ans << "\n";
  return 0;
}
