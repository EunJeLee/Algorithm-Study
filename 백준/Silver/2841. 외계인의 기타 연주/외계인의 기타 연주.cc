#include <iostream>
#include <stack>
using namespace std;

int main(){
  int N, P;
  int n, p, count = 0;
  stack<int> s[7];

  cin >> N >> P;

  for(int i = 0; i < N; i++){
    cin >> n >> p;

    while(!s[n].empty()){
      if(s[n].top() < p){
        s[n].push(p);
        count++;
        break;
      }
      else if(s[n].top() > p){
        s[n].pop();
        count++;
      }
      else{
        break;
      }
    }

    if(s[n].empty()){
      s[n].push(p);
      count++;
    }
  }

  cout << count << "\n";
}
