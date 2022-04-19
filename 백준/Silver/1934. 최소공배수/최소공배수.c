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
  int n;
  scanf("%d",&n);
  for(int i = 0; i < n; i++){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d\n",LCM(a,b));
  }
  return 0;
}
