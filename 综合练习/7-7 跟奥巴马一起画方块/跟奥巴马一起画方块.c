//https://pintia.cn/problem-sets/1103525610276245504/problems/1103525745123119110

#include <stdio.h>

int main(){
	int N, i, H, k;
	char c;
	
	scanf("%d %c", &N, &c);
	
	if(N%2) H=(N+1)/2;
	else H=N/2;
	
	for(i=1;	i<=H;	i++){
		for(k=1;	k<=N;	k++){
			printf("%c", c);
		}
		printf("\n");
	}
	
}
