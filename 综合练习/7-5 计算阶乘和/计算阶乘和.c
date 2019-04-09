//https://pintia.cn/problem-sets/1103525610276245504/problems/1103525745123119108

#include <stdio.h>

int main(){
	int N, S, n, t;
	
	scanf("%d", &N);
	
	for(S=0;	N>=1;	N--){
		for(n=N, t=1;	n>=1;	n--){
			t*=n;
		}
		S+=t;
	}
	
	printf("%d", S);
}
