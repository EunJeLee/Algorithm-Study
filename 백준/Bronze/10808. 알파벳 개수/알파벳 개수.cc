#include <stdio.h>
#include <string.h>

char arr[101];
char cnt[26] = {0, };

int main(){
  scanf("%s", arr);
  for(int i = 0; i < strlen(arr); i++) cnt[arr[i] - 97]++;

  for(int i = 0; i < 26; i++) printf("%d ",cnt[i]);
  return 0;
}