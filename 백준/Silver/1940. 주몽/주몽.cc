#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
   int n, m;
   int sum = 0;
   
   cin >> n >> m;
   
   for(int i = 0; i < n; i++){
       int tmp;
       cin >> tmp;
       v.push_back(tmp);
   }
   
    sort(v.begin(), v.end());
    
    int len = v.size();
    
    for(int i = 0; i < len-1; i++){
        for(int j = i+1; j < len; j++){
            if(v[i] + v[j] == m) {
                sum++;
            }
        }
    }
    
    cout << sum << "\n";


    return 0;
}