#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#include <set>
#include <map>
#include <cmath>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

vector<pair<int, string> > v;

void solve(int n){

   vector<int> v;
   
   int sum = 0;

   for(int i = 1; i < n; i++){
    if(n % i == 0) {
        sum += i;
        v.pb(i);
    }
   }
   if(n == sum) {
    cout << n << " = " << v[0];
    for(int i = 1; i < v.size(); i++){
        cout << " + " << v[i];
    }
    cout << endl;
   }
   else cout << n << " is NOT perfect." << endl;
   
}

int main(){

    

    while(true){
        int n;
        cin>> n;
        if (n == -1) break;
        solve(n);
    }

}
  
