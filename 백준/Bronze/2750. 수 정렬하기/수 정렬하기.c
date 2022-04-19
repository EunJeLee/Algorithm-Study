#include <stdio.h>
int main(){
int a ;
int n ;
scanf ("%d",&a);
int list[a] ;
int j ;
int k ;
int c ,d,e, f, g,h ;
int list_a , list_b ;

	for (j=0;j<a;j++){
		scanf("%d",&k);
		list[j]=k;	
	}
	for(f=0;f<a;f++){
		for (d=0;d<a-1;d++){
			if (list[d] > list[d+1]){
				list_a = list[d];
				list_b = list[d+1];
				list[d] = list_b;
				list[d+1] = list_a;
			}
		}




	}
	for(g=0;g<a;g++){
	printf("%d\n",list[g]);
	}
	return 0;
}