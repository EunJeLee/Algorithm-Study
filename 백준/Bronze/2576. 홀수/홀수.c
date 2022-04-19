#include <stdio.h>
int main(){
int a ;
int count =1 ;
int total =0 ;
int min = 101 ;
while(count != 8){
scanf("%d",&a);
	

		if(a%2!=0){
			total = total + a ;
			count = count + 1 ;
			if (min>=a){
				min= a ;
			}


		}
		else{
			count = count + 1 ;	
		}
	
	



}


if(total==0){
printf("%d\n",-1 );


}else{

printf("%d\n",total );
printf("%d\n",min );	 
}




return 0;	


}