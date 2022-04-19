#include <stdio.h>

int main(){
  int n, count = 1;
  int temp;
  scanf("%d", &n);

  if(n == 1) printf("666\n");
  else{
    for(int i = 667;;i++){
      temp = i;
      while(temp > 1){
        if(temp % 1000 == 666){
          count++;
          break;
        }
        else{
          temp /= 10;
        }
      }
      if(n == count){
        printf("%d\n",i);
        break;
      }
    }
  }
  return 0;
}
