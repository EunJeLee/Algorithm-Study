#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int d[12];

void dp(){
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    
    for(int i = 4; i < 12; i++){
        d[i] = d[i-1] + d[i-2] + d[i-3];
    }
}



void logic(){
    
    
    int input;
    cin >> input;
    cout << d[input] << "\n";
  
  
}

int main (){
    int ITER;

    cin >> ITER;
    dp();
   while(ITER--){
    logic();
   }
}