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
int n, m;
string b = "BWBWBWBW";
string w = "WBWBWBWB";

string case1[8] = {b, w, b, w, b, w, b, w};
string case2[8] = {w, b, w, b, w, b, w, b};
vector<string> v;


struct compare {
    bool operator()(const pair<lli, lli> a, const pair<lli, lli> b) {
       if(a.first == b.first) return a.second < b.second;
       return a.first > b.first;
    }
};


void input(){

}

void solve(){
   int n;
   
   vector<int> v;
   
   int t;
   cin >> t;
   
   int count = 0;
   for(int i = 0; i < 20; i++){
      int tmp;
      cin>> tmp;

      for(int j = 0; j < v.size(); j++){
         if(v[j] > tmp) count++;
      }
      v.pb(tmp);
      
   }
   
   cout << t << " " << count << endl;
}

int main() {
  int t;
  cin >> t;

  for(int i = 1; i <= t; i++){
   solve();
  }
}   
