#include <iostream>
#include <algorithm>
using namespace std;

void logic(){
    bool arr[501];
    int p, k;
    int sum = 0;

    cin >> p >> k;

    fill_n(arr, k, true);

    for(int i = 0 ; i < p; i++){
        int tmp;
        cin >> tmp;
        if (arr[tmp - 1]) arr[tmp - 1] = false;
        else sum++;
    }
    
    cout << sum << endl;
}

int main (){
    int ITER;

    cin >> ITER;

    while(ITER--){
        logic();
    }
}