//https://pintia.cn/problem-sets/1103523868394377216/problems/1103523936677646342

#include <stdio.h>

int main(){
	int N, K[10], i, sum=0, i2;
	scanf("%d", &N);
	for(i=0;	i<N;	i++){
		scanf("%d", &K[i]);
	}
	
	for(i=0;	i<N;	i++){
		for(i2=0;	i2<N;	i2++){
			if( i!=i2 ) sum+=K[i]*10+K[i2];
		}
	}
	printf("%d", sum);
}
