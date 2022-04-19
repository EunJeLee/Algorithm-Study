#include <iostream>
#include <deque>
#include <algorithm>
#include <string>

using namespace std;

deque<pair<int, pair<int, string> > > v;

int main(){
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    int age;
    string name;
    cin >> age >> name;
    v.push_back(make_pair(age, make_pair(i, name)));
  }
    sort(v.begin(), v.end());

    for(int i = 0; i < N; i++){
      if(v[0].first != v[1].first){
        cout << v[0].first << " " << v[0].second.second << "\n";
        v.pop_front();
      }
      else{
        N--;
        if(v[0].second.first < v[1].second.first){
          cout << v[0].first << " " << v[0].second.second << "\n";
          cout << v[1].first << " " << v[1].second.second << "\n";
        }
        else{
          cout << v[1].first << " " << v[1].second.second << "\n";
          cout << v[0].first << " " << v[0].second.second << "\n";
        }
        v.pop_front();
        v.pop_front();
      }
    }
  return 0;
}
