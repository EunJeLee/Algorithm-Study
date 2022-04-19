#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

deque<int> d;

int main(){
  int N;
  cin >> N;
  int check[100001] = {0};
  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    d.push_back(a);
  }

  sort(d.begin(), d.end());

  int comp = 10000;
  for(int i = 0; i < N; i++){
    if(comp != d[i]){
      cout << d[i] << " ";
      comp = d[i];
    }
  }


  return 0;
}
