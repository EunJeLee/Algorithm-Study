#include <iostream>
#include <algorithm>
using namespace std;

void logic(){
    string s;
    cin >> s;
    
    int arr[75];

    fill_n(arr, 75, -1);

    for(int i = 0; i < s.length(); i++){
         if(arr[s[i] -'0'] == -1)  arr[s[i] -'0'] = i; 
    }

    for(int i = 49; i <= 74; i++) cout << arr[i] << " ";
}

int main (){
    int ITER = 1;

    while(ITER--){
        logic();
    }
}