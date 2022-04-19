#include <iostream>

using namespace std;

int main(){
  int T;
  cin >> T;

  for(int i = 0; i < T; i++){
    int m, n, k;
    cin >> m >> n >> k;

    int field[50][50];

    for(int j = 0; j < 50; j++){
      for(int l = 0; l < 50; l++){
        field[j][l] = 0;
      }
    }

    for(int j = 0; j < k; j++){
      int x, y;
      cin >> x >> y;
      field[x][y] = 1;
    }

    int result = 0;

    while(true){
      bool find = false;
      for(int j = 0; j < m; j++){
        for(int l = 0; l < n; l++){
          if(field[j][l] == 1){
            find = true;
            result++;
            field[j][l] = 2;
            break;
          }
        }
        if(find == true)break;
      }
      if(find == false)break;

      bool spread;

      do{
        spread = false;
        for(int j = 0; j < m; j++){
          for(int l = 0; l < n; l++){

            if(field[j][l] == 2){
              if((j > 0) && (field[j-1][l] == 1)){
                field[j-1][l] = 2;
                spread = true;
              }
              if((j < m-1) && (field[j+1][l] == 1)){
                field[j+1][l] = 2;
                spread = true;
              }
              if((l > 0) && (field[j][l-1] == 1)){
                field[j][l-1] = 2;
                spread = true;
              }
              if((l < n - 1) && (field[j][l+1] == 1)){
                field[j][l+1] = 2;
                spread = true;
              }
            }
          }
        }
      }
      while(spread == true);
    }
    cout << result << "\n";
  }
}
