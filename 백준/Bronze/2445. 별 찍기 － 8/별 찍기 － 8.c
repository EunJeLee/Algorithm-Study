#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for(int i =n-1;i>0;i--){
    for(int j = 0;j<n-i;j++){
      printf("*");
    }
    for(int j = 0;j<2*i;j++){
      printf(" ");
    }
    for(int j = 0;j<n-i;j++){
      printf("*");
    }
    printf("\n");
  }
  for(int i = n; i>0;i--){
    for(int j=i;j>0;j--){
      printf("*");
    }
    for(int j =0 ;j <2*(n-i);j++){
      printf(" ");
    }
    for(int j=i;j>0;j--){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
