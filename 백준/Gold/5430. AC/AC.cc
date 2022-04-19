#include <iostream>
#include <string>
#include <deque>

using namespace std;

deque<int> d;


int main(){
  int T, n;

  cin >> T;

  for(int i = 0; i < T; i++){
    bool error = false;
    bool check = false;
    string stc, exp, temp;
    cin >> stc >> n >> exp;
    int exp_len = exp.length();
    int stc_len = stc.length();

    for(int k = 0; k < exp_len; k++){
      if(exp[k]=='['){
             continue;
           }
           else if(exp[k]>='0' && exp[k]<='9'){
             temp += exp[k];
           }
           else if(exp[k]==',' || exp[k]==']'){
             // cout << "push temp : " << temp << endl;
             if(temp.size() > 0)
               d.push_back(stoi(temp));
             temp.clear();
           }


    }

      for(int j = 0; j < stc_len; j++){
        if(stc[j] == 'R'){
          check = !check;
        }

        else if(stc[j] == 'D'){
          if(d.empty()){
            error = true;
            cout << "error" << "\n";
            break;
          }
          if(check){
            d.pop_back();
          }
          else{
            d.pop_front();
          }
        }
      }


    if(error == false){
      if(d.empty()){
        cout << "[]" << "\n";
      }

      else{
        int d_size = d.size();
        cout << '[';
        int a = d.size();
        if(check){
          for(int j = 0; j < d_size; j++){
            cout << d.back();
            d.pop_back();
            if(!d.empty()){
              cout << ',';
            }

          }
        }
          else{
            for(int j = 0; j < d_size; j++){
              cout << d.front();
              d.pop_front();
              if(!d.empty()){
                cout << ',';
              }
            }
        }
        cout << ']' << "\n";
      }


  }



    d.clear();
  }
}
