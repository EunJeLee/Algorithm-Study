#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int N;
  cin >> N;
  vector<pair<int, string> > v(N);

  for(int i = 0; i < N; i++){
    cin >> v[i].second;
    v[i].first = v[i].second.length();
  }

  sort(v.begin(), v.end());

  cout << v[0].second << "\n";
  for(int i = 1; i < N; i++){
    if(v[i-1].second != v[i].second){
      cout << v[i].second << "\n";
    }
  }


  return 0;
}
