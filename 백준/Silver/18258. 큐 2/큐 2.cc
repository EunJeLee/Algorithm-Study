#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <list>
#include <map>
#include <deque>
#define endl "\n"
#define MOD 10007
#define mp make_pair
#define pb push_back

using namespace std;

vector<int> v;
queue<int> q;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   int n;
   cin >> n;

   for(int i = 0; i < n; i++){
    string s;
    int num;
    cin >> s;

    if(s == "push") {
        cin >> num;
        q.push(num);
    }
    if(s == "back") {
        if(!q.empty()) cout << q.back() << endl;
        else cout << -1 << endl;
    }
    if(s == "size") cout << q.size() << endl;
    if(s == "pop") {
        if(!q.empty()){
            cout << q.front() << endl;
            q.pop();
        }
        else cout << -1 << endl;
    }
    if(s == "empty") cout << q.empty() << endl;
    if(s == "front") {
        if(!q.empty()) cout << q.front() << endl;
        else cout << -1 << endl;
    }
   }

 
}
