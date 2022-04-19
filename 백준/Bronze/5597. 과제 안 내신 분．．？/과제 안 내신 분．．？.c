#include<stdio.h>

int main(){
   int check[30] = {0};
   int i;
   
   for(i = 0; i < 28; i++){
   	int temp;
   	scanf("%d", &temp);
   	check[temp -1] =1;
   }
   
   for(i = 0; i < 30; i++){
   	if(check[i] != 1)printf("%d\n", i+1);
   }
}