#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

int main(){

   int n;
   cin >> n;
   int sum = 0;
   for(int i = n; i >= 1; i--) sum += i;

   cout << sum << endl;
}
