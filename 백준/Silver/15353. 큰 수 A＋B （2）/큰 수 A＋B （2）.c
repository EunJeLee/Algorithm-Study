#include <stdio.h>
#include <string.h>

char a[10001] = {0};
char b[10001] = {0};
char ans[10002] = {0};

void reverse(char* s);

int main(){
  int length, carry = 0;
  scanf("%s%s", a, b);

  reverse(a);
  reverse(b);
  length = strlen(a) > strlen(b) ? strlen(a) : strlen(b);

  for(int i = 0; i < length; i++){
    int sum = a[i] - '0' + b[i] - '0' + carry;
    while(sum < 0) sum += '0'; /* 0 과 0 의 합도 고려해서 while*/
    if(sum > 9) carry = 1;
    else carry = 0;
    ans[i] = sum % 10 + '0';
  }

  if (carry == 1) ans[length] = '1';
  reverse(ans);
  printf("%s\n", ans);


  return 0;
}

void reverse(char arr[]){
  int len = strlen(arr);
  for (int i = 0; i < len / 2; i++) {
    char temp = arr[i];
    arr[i] = arr[len - i - 1];
    arr[len - i - 1] = temp;
}
}
