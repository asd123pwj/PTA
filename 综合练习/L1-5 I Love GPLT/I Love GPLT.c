//https://pintia.cn/problem-sets/1103525610276245504/problems/1103526249970520067

#include <stdio.h>

int main(){
	char a[12]="I Love GPLT";
	int i;
	
	for(i=0;	i<12;	i++){
		printf("%c", a[i]);
		if(i==10) break;
		printf("\n");
	}
}
