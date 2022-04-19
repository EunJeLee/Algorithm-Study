#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int N, budget;
  cin >> N;

  for(int i = 0; i < N; i++){
    int temp, temp_sum = 0;
    cin >> temp;
    temp_sum += temp;
    v.push_back(temp);
  }
  cin >> budget;
  int a = 1, b = *max_element(v.begin(), v.end());
  int ans;

  while(b - a >= 0){
    int mid = (a + b) / 2;
    int cur_bud = 0;
    for(int i = 0; i < v.size(); i++){
      if(mid < v[i]){
        cur_bud += mid;
      }
      else{
        cur_bud += v[i];
      }
    }
    if(cur_bud <= budget){
      a = mid + 1;
      ans = mid;
    }
    else{
      b = mid - 1;
    }
  }

  cout << ans << "\n";


  return 0;
}
