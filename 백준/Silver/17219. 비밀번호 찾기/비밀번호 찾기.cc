#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, string> m;

int main(){
  int n, k;

  cin >> n >> k;

  for(int i = 0; i < n; i++){
    string s1, s2;
    cin >> s1 >> s2;
    m.insert(pair<string, string>(s1, s2));
  }

  for(int i = 0; i < k; i++){
    string ans;
    cin >> ans;

    cout << m[ans] << "\n";
  }

}
