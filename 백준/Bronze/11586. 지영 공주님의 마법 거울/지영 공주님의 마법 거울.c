#include <stdio.h>
#include <string.h>
int main(){
int num;
int k;
int i, j ;
scanf("%d",&num);
char mat[200][200];

for(i=0;i<num;i++){
	scanf("%s",mat[i]);
	}
scanf("%d", &k);
if(k==1){
	;
}
else if (k==2){
	for(i=0;i<num;i++){
		for(j=0;j<num/2;j++){
			char temp = mat[i][j];
			mat[i][j] = mat[i][num-j-1];
			mat[i][num-j-1]= temp;
			}
		}
	}
else if(k ==3){
	for(i=0;i<num/2;i++ ){
		for(j=0;j<num;j++){
			char temp = mat[i][j];
			mat[i][j] = mat[num-i-1][j];
			mat[num-i-1][j] = temp;
			}

	}
}
for(i=0; i<num;i++){
	for(j = 0 ; j< num; j++){
		printf("%c",mat[i][j]);
		}
	printf("\n");
	}	

	return 0;
}