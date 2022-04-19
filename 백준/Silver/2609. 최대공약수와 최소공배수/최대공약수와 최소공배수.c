#include <stdio.h>
int GCD(int a, int b){
  if(b == 0)return a;
  else{
    return GCD(b,a%b);
  }
}

int LCM(int a, int b){
  return a * b / GCD(a,b);
}

int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d\n%d\n",GCD(a,b),LCM(a,b));
  return 0;
}
