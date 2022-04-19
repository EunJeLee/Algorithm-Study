#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    scanf("%s",a);
    int i;
 for(i=0;a[i] != '\0';i++){
     if (65<=a[i] && a[i] <=90){
         printf("%c",a[i]+32);
     }
     else if(97<=a[i] && a[i] <=122){
         printf("%c",a[i]-32);
     }
 }

 printf("\n");
return 0;
}
