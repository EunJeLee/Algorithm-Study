#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int N, M;
  cin >> N;

  for(int i = 0; i < N; i++){
    int temp;
    cin >> temp;
    v.push_back(temp);
  }
  sort(v.begin(), v.end());

  cin >> M;
  for(int i = 0; i < M; i++){
    int temp;
    cin >> temp;
    int ans = 0;
    ans = upper_bound(v.begin(), v.end(), temp) - lower_bound(v.begin(), v.end(), temp);
    cout << ans << " ";
  }
  cout << "\n";
}
