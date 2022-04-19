#include <stdio.h>
int main(){

int aver,i,a , I,b, c, d,biggest=0;
for(i=0;i<5;i++){
	scanf("%d %d %d %d",&a,&b,&c,&d);
aver=(a+b+c+d);
if(biggest<aver){
	biggest=aver;
I=i;}}
	printf("%d %d"  ,I+1,biggest);
	
return 0;
}