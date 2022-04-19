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
    int a = 0, b = v.size() - 1;
    bool cpzm = false;
    while(b - a >= 0){
      int mid = (a + b) / 2;
      if(temp == v[mid]){
        cout << 1 << " ";
        cpzm = true;
        break;
      }
      else if(temp > v[mid]){
        a = mid + 1;
      }
      else if(temp < v[mid]){
        b = mid - 1;
      }
    }
    if(!cpzm) cout << 0 << " ";
  }
  cout << "\n";
  return 0;
}
