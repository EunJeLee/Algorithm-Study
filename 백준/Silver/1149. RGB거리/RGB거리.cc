#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int cost[1005][4];
int rgb[1005][4];

int main (){
    int N;
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        cin >> rgb[i][1] >> rgb[i][2] >> rgb[i][3];
    }

    cost[1][1] = rgb[1][1];
    cost[1][2] = rgb[1][2];
    cost[1][3] = rgb[1][3];

    cost[2][1] = min(cost[1][2], cost[1][3]) +rgb[2][1];
    cost[2][2] = min(cost[1][1], cost[1][3]) +rgb[2][2];
    cost[2][3] = min(cost[1][1], cost[1][2]) +rgb[2][3];

    for(int i = 3; i <= N; i++){
        cost[i][1] = min(cost[i-1][2], cost[i-1][3]) + rgb[i][1];
        cost[i][2] = min(cost[i-1][1], cost[i-1][3]) + rgb[i][2];
        cost[i][3] = min(cost[i-1][1], cost[i-1][2]) + rgb[i][3];
    }

    cout << min(min(cost[N][1], cost[N][2]), cost[N][3]) << "\n";

}