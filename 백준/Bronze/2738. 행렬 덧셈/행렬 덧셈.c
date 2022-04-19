#include <stdio.h>

int main(){
	int n, m;
	int arr[101][101];
	
	scanf("%d%d",&n, &m);
	
	int i, j;
	int tmp;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			
			scanf("%d",&tmp);
			arr[i][j] += tmp;
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}