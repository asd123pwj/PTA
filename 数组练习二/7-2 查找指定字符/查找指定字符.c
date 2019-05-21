//https://pintia.cn/problem-sets/1103524409476370432/problems/1103524468511199233

#include <stdio.h>


int main(){
	
	char d, sr[81];
	int i;
	scanf("%c", &d);
	getchar();
	gets(sr);
	
	for(i=0;	sr[i]!='\0';	i++){
		
	}
	for(;	i>=0;	i--){
		if(sr[i]==d) {
			printf("index = %d", i);
			return 0;
		}
	}
	printf("Not Found");
}
