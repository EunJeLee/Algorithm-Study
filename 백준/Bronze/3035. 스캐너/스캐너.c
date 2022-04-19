#include <stdio.h>
#include <string.h>


int main(){
	int R,C,ZR,ZC;

	scanf("%d %d %d %d",&R,&C,&ZR,&ZC);
	char mat[51][51];

	for(int i =0; i<R; i++){
		
			scanf("%s",mat[i]);
		
	}

	char zmat[R*ZR][C*ZC]; //확대된 만큼의 새로운 2중 배열 생성
	/*확대된 만큼 복사된 글자들을 새로운 2중 배열에 넣는다*/
	for(int i = 0; i<R*ZR; i++){
		for(int j = 0; j<C*ZC; j++){
			zmat[i][j] = mat[i/ZR][j/ZC];
		}
	}

	/*확대된 2중 배열 출력*/
	for(int i = 0; i<R*ZR; i++){
		for(int j = 0; j<C*ZC; j++){
			printf("%c",zmat[i][j]);
		}
		printf("\n");
	}


	return 0;
}