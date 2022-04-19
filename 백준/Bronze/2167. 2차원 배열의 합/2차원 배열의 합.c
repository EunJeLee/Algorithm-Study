#include <stdio.h>
int main(){
int n, m, i, j ,k, a;
int sum = 0;
// int mat[301][301]={0};

scanf("%d %d",&n,&m);
int mat[n][m];
for(i=0; i< n; i++){
	for(j=0; j <m ;j++){
		scanf("%d",&mat[i][j]);
		}
	}	
scanf("%d",&a);
for(k=0;k<a;k++){
   int b, c, d, e;

	scanf("%d %d %d %d",&b,&c,&d,&e);
	for(i=b-1;i<d;i++){
		for(j=c-1;j<e;j++){
			sum+=mat[i][j];
			}
		}
	printf("%d\n",sum );
	sum = 0;
}



	return 0;


}