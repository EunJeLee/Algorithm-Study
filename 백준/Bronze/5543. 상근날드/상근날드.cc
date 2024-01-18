#include <iostream>

using namespace std;

int main(){
    int arr[500];
    int max = 3000;
    int sum = 0;

    for(int i = 0; i < 3; i++){
        cin >> arr[i];
        if(arr[i] < max) max = arr[i];
    }
    sum += max;

    max = 3000;
    for(int i = 0; i < 2; i++){
        cin >> arr[i+3];
        if(arr[i+3] < max) max = arr[i+3];
    }
    cout << sum + max - 50 << "\n";
    

    

    return 0;
}