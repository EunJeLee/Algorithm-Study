#include <iostream>
#include <vector>

using namespace std;

 int main() {
   int n, m;

   cin >> n >> m;

   for(int i = 0; i < n; i++){
     int temp;
     cin >> temp;
     if(temp < m)cout << temp << " ";
   }
   cout << "\n";
 }
