#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int stairs[301];
int d[301][3];

void dp(int n){
    d[1][1] = stairs[1];
    d[1][2] = 0;
    d[2][1] = stairs[2];
    d[2][2] = stairs[1] + stairs[2];


    for(int i = 3; i <= n; i++){
        d[i][1] =  max(d[i-2][1], d[i-2][2]) + stairs[i];
        d[i][2] = d[i-1][1] + stairs[i];
    }

    cout << max(d[n][1] , d[n][2]) << "\n";
}

void input(){
    int N;
    cin >> N;

    for(int i = 0 ;i < N; i++){
        int tmp;
        cin >> tmp;
        stairs[i+1] = tmp;
    }

    dp(N);
}



int main (){
    input();
}