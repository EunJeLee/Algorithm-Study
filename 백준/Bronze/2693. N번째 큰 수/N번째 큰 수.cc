#include <iostream>
#include <algorithm>
using namespace std;


bool desc(int a, int b){
    return a > b;
}

void logic(){
    int arr[10];

    for(int i =0 ; i < 10 ;i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+10, desc);

    cout << arr[2] << "\n";

}

int main (){
    int ITER;

    cin >> ITER;

    while(ITER--){
        logic();
    }
}