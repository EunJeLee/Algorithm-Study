#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



void input(){
  vector<int> v;
  int n;
  int k = 0;
  cin >> n;

  while(n >= 1){
    if(n % 2 == 1) v.push_back(k);
    k++;
    n /= 2;
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }cout << endl;
}

void solve(){

}

int main(){
  int N;
  cin >> N;
  for(int i = 0; i < N;i++){
    input();
  }

  solve();


  return 0;
}
