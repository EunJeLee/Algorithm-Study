#include <stdio.h>
int main(){
	int mat[101][101]= {0};
	int ldx,ldy,rux,ruy;
	int ans= 0;
	int i,j,k;
	for (i=0;i<4;i++){
	scanf("%d %d %d %d",&ldx,&ldy,&rux,&ruy);
		for (j=ldy;j<ruy;j++){
			for(k=ldx;k<rux;k++){
				mat[j][k]=1;
				}
			}
		
		}
	for(i = 0; i < 100; i ++){
		for(j = 0;j< 100;j++){
			if (mat[i][j] == 1){
				ans += 1;
				}
			}
		}

	printf("%d",ans);


	return 0;
}