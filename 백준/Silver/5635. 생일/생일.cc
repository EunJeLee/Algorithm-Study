#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define endl "\n"
#define MOD 10007
#define lli long long

using namespace std;

string name[105];
int day[105];
int month[105];
int year[105];
vector<pair<int, string> > v;

int main(){
    int n;

    cin >> n;
    
    for(int i = 0 ; i < n; i++){
        string name;
        string year, month, day;
        cin >> name >> day >> month >> year;

        if(stoi(month) < 10) month = "0" + month;
        if(stoi(day) < 10) day = "0" + day;

        v.push_back(make_pair(stoi(year+month+day), name));
    }
    
    sort(v.begin(), v.end());
 
    cout << v[n-1].second << endl << v[0].second <<endl;

}
