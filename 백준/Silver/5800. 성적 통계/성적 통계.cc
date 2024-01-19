#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void logic(){
    vector<int> v;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    int gap = 0;

    for(int i = 0; i < v.size()-1; i++){
        if(abs(v[i]- v[i+1]) > gap) gap = abs(v[i]- v[i+1]);
    }
    
    cout << "Max " << v[v.size()-1] << ", Min " << v[0] << ", Largest gap " << gap << "\n";
  
}

int main (){
    int ITER;

    cin >> ITER;

    for(int i = 1; i <= ITER; i++){
        cout << "Class " << i << "\n";
        logic();
    }
}