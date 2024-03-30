#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <set>
#include <map>
#include <list>
#include <cmath>
#include <cstring>
#define endl "\n"
#define MOD 10007
#define lli long long
#define mp make_pair
#define pb push_back

using namespace std;


pair<vector<int>, vector<char> > parse(string s){
    vector<int> numbers;
    vector<char> operators;
    
    string tmp;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '-'  || s[i] == '+'){
            numbers.pb(stoi(tmp));
            operators.pb(s[i]);
            tmp = "";
        }
        else{
            tmp += s[i];
        }
    }
    numbers.pb(stoi(tmp));

    return mp(numbers, operators);
}

int main(){
    string s;
    cin >> s;
    
    pair<vector<int>, vector<char> > parsed =  parse(s);

    vector<int> numbers = parsed.first;
    vector<char> operators = parsed.second;

    int sum = numbers[0];
    int i;
    for(i = 0; i < operators.size(); i++){
        if(operators[i] == '+'){
            if(i+1 < numbers.size()){
            sum += numbers[i+1];
        }
        }
        else if(operators[i] == '-') break;
    }

    for(int j = i+1; j < numbers.size(); j++){
        sum -= numbers[j];
    };

    cout << sum << endl;


}