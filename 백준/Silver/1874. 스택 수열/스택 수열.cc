#include <iostream>
#include <stack>
#include <queue>

using namespace std;

stack<int> s;
queue<int> q;
queue<char> c;
int arr[100001];

int main(){
  int N;
  cin >> N;
  for(int i = 1; i <= N; i++){
    cin >> arr[i];
    q.push(i);
  }



  for(int i = 1; i <= N; i++){
    while(1){
      if(s.empty() && q.empty()){
        cout << "NO\n";
        return 0;
      }
      if(s.empty() && !q.empty()){
        s.push(q.front());
        c.push('+');
        q.pop();
      }
      if(s.top() == arr[i]){
        s.pop();
        c.push('-');
        break;
      }
      else if(s.top() > arr[i]){
        s.pop();
        c.push('-');
      }
      else{ // s.top() < arr[i]
        if(s.top() < arr[i] && q.front() > arr[i] || q.empty()){
          cout << "NO\n";
          return 0;
        }
        else{
          s.push(q.front());
          q.pop();
          c.push('+');
        }
      }
    }
  }
  int c_size = c.size();
  for(int i = 0; i < c_size; i++){
    cout << c.front() << "\n";
    c.pop();
  }


  return 0;
}
