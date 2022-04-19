#include <stdio.h>

char arr[81];
int main(){
  int T;

  scanf("%d", &T);
  for(int i = 0; i < T; i++){
    int temp;
    scanf("%d", &temp);
    scanf("%s", arr);
    arr[temp - 1] = 0;
    printf("%s%s\n",arr,&arr[temp]);
  }
  return 0;
}
