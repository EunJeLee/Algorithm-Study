#include <stdio.h>
int main(){
int N;
int i;
int a,total=0,biggest=0;
int arr[1000]={};	
	scanf("%d",&N);
for(i=0;i<N;i++){
	scanf("%d",&arr[i]);}
	
for(i=0;i<N-1;i++){
	if(arr[i]<arr[i+1]){
		a=arr[i+1]-arr[i]; 
			total=total+a;
		if(biggest<total){
			biggest=total;}}
	
	else if(arr[i]>=arr[i+1]){
		total=0;
	}
	
}
	
printf("%d" ,biggest);	
	
	
	
	
return 0;}