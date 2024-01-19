#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void logic(){
    vector<int> v;
    
    for(int i = 0; i < 7; i++) {
        int tmp;
        cin >> tmp;
        if(tmp % 2 == 0){
            v.push_back(tmp);
        }
    }

    sort(v.begin(), v.end());
    
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }

    cout << sum << " " << v[0] << "\n";
  
}

int main (){
    int ITER;

    cin >> ITER;

    while(ITER--){
        logic();
    }
}