#include <stdio.h>

int main(){

int total = 0 ;
int count = 0;
	
	
while (1){
int score ;

scanf("%d",&score); 
	if (count == 5){
		break ;
	}

	else{
		if(score<40){
			score = 40;
			total=total + score;
		}
		else{
			total=total +score;
		}

	}
	count=count +1;	




}
printf("%d",total/5);	





	return 0;
}