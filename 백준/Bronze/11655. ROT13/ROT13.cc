#include <iostream>

using namespace std;

int main(){
   string s;
   
   getline(cin, s);

   for(int i = 0; i < s.length(); i++){
       if(s[i] >= 97 && s[i] <= 122){
           if(s[i] + 13 > 122){
               cout << char(s[i] - 13);
           }
           else{
               cout << char(s[i] + 13);
           }
       }
       else if(s[i] >= 65 && s[i] <= 90){
 
           if(s[i] + 13 > 90) {
               cout << char(s[i]- 13);
           }
           else{
               cout << char(s[i]+ 13);
           }
       }
       else cout << s[i];
    }


    return 0;
}