#include <stdio.h>
int main(){
  int a[11] = {0};
  int mistery;
  int sum = 0;
  int subsum = 0;
  int spy_a, spy_b;
  for(int i = 0; i < 9; i++){
    scanf("%d",&a[i]);
    sum += a[i];
  }

  for(int i = 8; i > 0; i--){
    for(int j = 0; j < i; j++){
      if(a[j] > a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }

/*  for(int i = 0; i < 9;i++)printf("%d\n",a[i]);*/

  mistery = sum - 100;
  for(int i = 0; i < 9; i++){
    for(int j = 1; j < 9; j++){
      subsum += a[i] + a[j];
      if(subsum == mistery){
        spy_a = i;
        spy_b = j;
      }
      subsum = 0;
    }
  }
  /*  for(int i = 0; i < 9;i++)printf("%d\n",a[i]);*/

for(int i = 0; i < 9; i++){
if(a[i] != a[spy_a] && a[i] != a[spy_b]){
  printf("%d\n", a[i]);
}
}
}
