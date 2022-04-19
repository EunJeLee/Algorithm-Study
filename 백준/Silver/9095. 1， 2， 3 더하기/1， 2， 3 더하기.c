#include <stdio.h>

int fibo(int n){
  if(n == 1)return 1;
  else if(n == 2)return 2;
  else if(n == 3)return 4;
  else return fibo(n-1) + fibo(n-2) + fibo(n-3);
}

int main(){
  int T, n;
  scanf("%d",&T);
  for(int i = 0; i < T; i++){
    scanf("%d",&n);
    printf("%d\n",fibo(n));
  }
  return 0;
}
