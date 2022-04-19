#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

deque<pair<int, int> > v;

int main(){
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;
    v.push_back(make_pair(a,b));
  }
  sort(v.begin(), v.end());

  for(int i = 0; i < N; i++){
    if(v[0].first != v[1].first){
      cout << v[0].first << " " << v[0].second << "\n";
      v.pop_front();
    }
    else{
      N--;
      if(v[0].second < v[1].second){
        cout << v[0].first << " " << v[0].second << "\n";
        cout << v[1].first << " " << v[1].second << "\n";
      }
      else{
        cout << v[1].first << " " << v[1].second << "\n";
        cout << v[0].first << " " << v[0].second << "\n";
      }
      v.pop_front();
      v.pop_front();
    }
  }
  return 0;
}
