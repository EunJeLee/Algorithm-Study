#include <stdio.h>

int main(){
  int arr[8];
  int check;
  for(int i = 0; i < 8; i++){
    scanf("%d",&arr[i]);
  }

  for(int i = 0; i < 6; i++){
    if(arr[i] < arr[i+1] && arr[i+1] < arr[i+2]) check = 1;
    else if(arr[i] > arr[i+1] && arr[i+1] > arr[i+2]) check = 2;
    else{
      check = 0;
      break;
    }
  }
  if(check == 1)printf("ascending\n");
  else if(check == 2)printf("descending\n");
  else printf("mixed\n");

  return 0;
}
