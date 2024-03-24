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


// bool compare(const int a, const int b){
//     return a > b;
// }

int find(int y, int x){
   int count1 = 0;
   int count2 = 0;
   for(int i = 0; i < 8; i++){
      for(int j = 0; j < 8; j++){
         if(v[i+y][j+x] != case1[i][j]) count1++;
      }
   }

   for(int i = 0; i < 8; i++){
      for(int j = 0; j < 8; j++){
         if(v[i+y][j+x] != case2[i][j]) count2++;
      }
   }

   return min(count1, count2);
}

void solve(){

}

void input(){
  
}

int main() {
   cin >> n >> m;

   for(int i = 0; i < n; i++){
      string tmp;
      cin >> tmp;
      v.pb(tmp);
   }

   int min = 3000;
   for(int i = 0; i < n; i++){
      if(i + 8 > n) break;
      for(int j = 0; j < m; j++){
         if(j + 8 > m) break;
         if(find(i, j) < min) min = find(i, j);
      }
   }

   cout << min << endl;   
}   
