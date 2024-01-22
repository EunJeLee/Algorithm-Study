#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    
    int n, k;
    
    cin >> n >> k;
    
    for(int i = 0; i < 10; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    
    int count = 0;

    for(int i = v.size()-1; i >= 0; i--){
        count += k / v[i];
        k %= v[i];
    }
    
    cout << count << endl;


    return 0;
}