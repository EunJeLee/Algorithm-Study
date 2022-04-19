#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    if(x1 == x2 && y1 == y2 && r1 == r2){
      cout << -1 << "\n";
    }
    else{
      double dist = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
      double r = r1 > r2 ? r1 - r2 : r2 - r1;
      if(dist < r1 + r2 && (r < dist)) cout << 2 << "\n";
      else if(dist == r1 + r2 || dist == r) cout << 1 << "\n";
      else cout << 0 << "\n";
    }
  }

  return 0;
}
