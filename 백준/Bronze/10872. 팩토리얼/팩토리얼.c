#include <stdio.h>
int sum(int x);
int k;
int main(){
	scanf("%d",&k);
	printf("%d\n",sum(k) );
return 0;
}
int n;
int sum(int n){
	if(n==0){
		return 1;}
	else {
		return n *sum(n-1);
	}


	

}