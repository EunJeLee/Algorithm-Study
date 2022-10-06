#include <iostream>
#include <queue>
#include <string>

using namespace std;

void solve(string s){
  int len = s.length();
  
  if((s[len-1] - '0') % 2 == 0) cout << "even" << endl;
  else cout << "odd" << endl;
}


void input(){
  int T;
  cin >> T;
  for(int i = 0; i < T; i++){
    string s;
    cin >> s;
    solve(s);
  }
}


int main(){
  input();
   return 0;
}
