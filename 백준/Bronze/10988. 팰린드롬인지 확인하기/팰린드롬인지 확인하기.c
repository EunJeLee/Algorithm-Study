#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    int i,mid,k;
    scanf("%s",a);
    mid = strlen(a)/2;
 for(i=0;i < mid;i++){
     if (a[i]!=a[strlen(a)-i-1]){
         printf("0\n");
         return 0;
     }

 }
 printf("1\n");
return 0;
}