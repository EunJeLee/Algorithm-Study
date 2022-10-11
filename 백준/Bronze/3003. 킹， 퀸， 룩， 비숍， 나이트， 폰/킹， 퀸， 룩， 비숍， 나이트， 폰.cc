#include <iostream>
#include <string>
#define endl "\n"

using namespace std;

int main(){
    for(int i = 0; i < 2; i++){
        int a;
        cin >> a;
        cout << 1 - a << " ";
    }

    for(int i = 0; i < 3; i++){
        int a;
        cin >> a;
        cout << 2 - a << " ";
    }

    int a;
    cin >> a;
    cout << 8 - a << endl;


    return 0;
}