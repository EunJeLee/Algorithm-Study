#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int,int> > v;
vector<int> v2;

int main(){
  for(int i = 1; i <= 8; i++){
    int score;
    cin >> score;
    v.push_back(make_pair(score, i));
  }
  sort(v.begin(), v.end());

  int sum = 0;
  for(int i = 3; i < 8; i++){
    sum += v[i].first;
  }
  cout << sum << "\n";
  for(int i = 3; i < 8; i++){
    v2.push_back(v[i].second);
  }
  sort(v2.begin(), v2.end());
  for(int i = 0; i < v2.size() ; i++){
    cout << v2[i] << " ";
  }
  return 0;
}
