#include <iostream>
#include <algorithm>
using namespace std;


bool desc(int a, int b){ 
  return a > b; 
} 

int main (){
    int input[100];
    string s;

    cin >> s;

    for(int i = 0 ;i < s.length(); i++){
        input[i] =  s[i] - '0';
    }

    sort(input, input + s.length(), desc);

    for(int i = 0; i < s.length(); i++){
        cout << input[i];
    }
    cout << "\n";
}