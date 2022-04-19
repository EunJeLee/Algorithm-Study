#include <stdio.h>
int main(){
	char word1[1001]={}, word2[1001]={} ;
	scanf("%s%s",word1,word2);
	int i,arr1[26]={};
	int arr2[26]={};
	int total = 0 ;

	for(i=0;word1[i]!='\0';i++){
		arr1[word1[i]-97]++;	}
	for(i=0;word2[i]!='\0';i++){
		arr2[word2[i]-97]++;
	}
	for(i=0;i<26;i++){
		total += abs(arr1[i]-arr2[i]);

	}
	printf("%d\n",total );

	return 0;
}
