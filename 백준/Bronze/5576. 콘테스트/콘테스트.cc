#include <iostream>
#include <algorithm>
#include <vector>
#define FASTIO() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;


int main (){
    FASTIO();

    vector<int> v1, v2;
    

    for(int i = 0; i < 10; i++){
        int tmp;
        cin >> tmp;
        v1.push_back(tmp);
    }

    for(int i = 0; i < 10; i++){
        int tmp;
        cin >> tmp;
        v2.push_back(tmp);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    cout << v1[9] + v1[8] + v1[7] << " " << v2[9] + v2[8] + v2[7] << endl;


}