#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <cmath>
#include <algorithm>
#include <list>
#include <map>
#include <deque>
#include <tuple>
#define endl "\n"
#define MOD 10007
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define lli long long
#define FASTIO() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {-1, 0, 1, 0};

struct compare {
    bool operator()(const pair<lli, lli> a, const pair<lli, lli> b) {
       if(a.first == b.first) return a.second < b.second;
       return a.first > b.first;
    }
};


// bool compare(const int a, const int b){
//     return a > b;
// }

void solve(){

}

void input(){
  
}

int main() {
   lli x, y, w, s;

   cin >> x >> y >> w >> s;
   lli sum = 0;

   if(2* w > s){
      sum += min(x, y)*s;

      if((x+y)% 2 == 1){
         if(w < s) sum += abs(x-y)*w;
         else sum += (abs(x-y)-1)*s + w;
      }
      else {
          if(w < s) sum += abs(x-y)*w;
          else sum += abs(x-y)*s;
      }
   }
   else{
      sum += (x+y)*w;
   }
   cout << sum << endl;
   
}   
