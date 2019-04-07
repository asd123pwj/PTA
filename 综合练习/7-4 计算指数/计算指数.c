//https://pintia.cn/problem-sets/1103525610276245504/problems/1103525745123119107

#include <stdio.h>

int main (){
	int n, put, i;
	scanf("%d", &n);
	
	for(i=1,put=1; i<=n; i++){
		put*=2;
	}
	printf("2^%d = %d", n, put);
}
