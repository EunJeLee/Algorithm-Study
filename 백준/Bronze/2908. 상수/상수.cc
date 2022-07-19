#include <iostream>
#include <string>
#define endl '\n'

using namespace std;

string s1, s2;


string reverse(string s){
  int len = s.length();

  for(int i = 0; i < len/2; i++){
    char temp = s[len-i-1];
    s[len-i-1] = s[i];
    s[i] = temp;
  }

  return s;
}

void input(){
  cin >> s1 >> s2;
}

void solve(){
  s1 = reverse(s1);
  s2 = reverse(s2);

  s1 > s2 ? cout << s1 << endl : cout << s2 << endl;

}

int main(){
  input();
  solve();


  return 0;
}
