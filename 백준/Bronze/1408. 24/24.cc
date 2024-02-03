#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;

int main(){
    string t1, t2;

    cin >> t1 >> t2;
    
    int t2second = stoi(t2.substr(6, 2));
    int t1second = stoi(t1.substr(6, 2));
    int t2min = stoi(t2.substr(3, 2));
    int t1min = stoi(t1.substr(3, 2));
    int t2hour = stoi(t2.substr(0, 2));
    int t1hour = stoi(t1.substr(0, 2));

    if(t2second - t1second < 0 ){
        t2second += 60;
        t2min -= 1;
    }

    if(t2min - t1min < 0) {
        t2min += 60;
        t2hour -= 1;
    }
    
    if(t2hour - t1hour < 0) {
        t2hour += 24;
    }

    string hour, min, second;

    second = t2second-t1second < 10 ? "0" + to_string(t2second-t1second) : to_string(t2second-t1second);
    min = t2min-t1min < 10 ? "0" + to_string(t2min-t1min) : to_string(t2min-t1min);
    hour = t2hour-t1hour < 10 ? "0" + to_string(t2hour-t1hour) : to_string(t2hour-t1hour);

    cout << hour << ":" << min << ":" << second << endl;
}
