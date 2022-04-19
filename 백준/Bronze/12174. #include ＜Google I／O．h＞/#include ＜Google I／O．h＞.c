#include <stdio.h>
#include <string.h>

int main(){
  int T;
  scanf("%d", &T);
  for(int k = 0; k < T; k++){
    char arr[8001] = {0};
    int n;
    scanf("%d %s", &n, arr);
    printf("Case #%d: ",k+1);
    for(int j = 0; j < n; j++){
      int tmp[8] = {0};
      int sum = 0;
      int pow = 1;
      for(int i = 8*j; i < 8*(j+1); i++){
        if(arr[i] == 'I') tmp[i-8*j] = 1;
      }
      for(int i = 7; i >= 0; i--){
        sum += pow * tmp[i];
        pow *= 2;
      }
      printf("%c", sum);
    }
    printf("\n");
  }
  return 0;
}
