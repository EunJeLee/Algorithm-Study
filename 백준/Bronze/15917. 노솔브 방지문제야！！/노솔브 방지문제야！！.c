#include <stdio.h>

int main(){
  int n;

  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    int x;
    scanf("%d", &x);
    if(x == 1)printf("1\n");
    else if(x % 2 == 1) printf("0\n");
    else{
      while(1){
        x /= 2;
        if(x == 1){
          printf("1\n");
          break;
        }
        else if(x % 2  == 1){
          printf("0\n");
          break;
        }
      }
    }
  }
  return 0;
}
