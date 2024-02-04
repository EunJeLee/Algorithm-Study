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

   int price;

   cin >> price;

   for(int i = 0; i < 9; i++){
    int tmp;
    cin >> tmp;
    price -= tmp;
   }

   cout << price << endl;
}
