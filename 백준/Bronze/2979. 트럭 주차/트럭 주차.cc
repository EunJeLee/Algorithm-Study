#include <iostream>

using namespace std;

int main(){
    int time[101] = {0};
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = 0; i< 3; i++){
        int before, after;
        cin >> before >> after;
        for(int j = before; j < after; j++){
            time[j] += 1;
        }
    }

    int sum = 0;
    for(int i = 1; i <= 100; i++){
        if(time[i] == 1) sum += a;
        else if(time[i] == 2) sum += 2*b;
        else if(time[i] == 3) sum += 3*c;
    }

    cout << sum << "\n";


    return 0;
}