#include <stdio.h>
int main(){
	int i;
	int n;
	int j;
	int k;
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		{
			for(j=n;j>i;j--){
				printf(" ");
			}
			for(k=0;k<i;k++){
				printf("*");
			}
			printf("\n");

		}


	return 0;
}