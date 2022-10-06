#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void solve(){


}



void input(){
  int n, mm;
  vector<int> v1, v2;
  map<string, int> m;

  cin >> n;
  
  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    
    m[s] = 1;
  }

  cin >> mm;

  for(int i = 0; i < mm; i++){
    string s;
    cin >> s;

    if (m[s] == 1)
      cout << 1 << "\n";
    else
      cout << 0 << "\n";
  }
}


int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
  input();
   return 0;
}
