#include <stdio.h>

int GCD(int x, int y){
  if(y == 0)return x;
  else return GCD(y,x%y);
}

int main(){
  int num_1, num_2;
  long long int sum = 0;

  scanf("%d\n",&num_1);
  for(int i = 0; i < num_1; i++){
    scanf("%d",&num_2);
    int ary[100];
    for(int j = 0; j < num_2; j++){
      scanf("%d",&ary[j]);
    }
    for(int j = 0; j < num_2 - 1; j++){
      for(int k = j + 1; k <num_2; k++){
        sum += GCD(ary[j],ary[k]);
      }
    }
      printf("%lld\n",sum);
      sum = 0;
  }

  return 0;
}
