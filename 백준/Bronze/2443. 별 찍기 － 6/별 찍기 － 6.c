#include <stdio.h>
  int main(){
    int a;
    scanf("%d",&a);
    for(int i=a-1;i>=0;i--){
      for(int j=0;j<a-i-1;j++)
        printf(" ");
      for(int j=0;j < i*2+1;++j)
        printf("*");
      printf("\n");
    }
    }
