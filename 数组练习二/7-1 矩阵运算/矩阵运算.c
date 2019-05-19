//https://pintia.cn/problem-sets/1103524409476370432/problems/1103524468511199232
//没定义sum初始值，怪不得一直错 

#include <stdio.h>

int main(){
	int n, K[11][11], i1, i2, sum=0;
	
	scanf("%d", &n);
	for(i1=0;	i1<n;	i1++){
		for(i2=0;	i2<n;	i2++){
			scanf("%d", &K[i1][i2]);
		//	if( i2!=n-1 && i1!=n-1 && i2!=n-i1-1) sum+=K[i1][i2];
			if( !( i2==n-1 || i1==n-1 || i2==(n-i1-1)) ) sum+=K[i1][i2];
		}
	}
	/*
	for(i1=0;	i1<n;	i1++){
		for(i2=0;	i2<n;	i2++){
			if( i2!=n-1 && i1!=n-1 && i2!=n-i1-1) sum+=K[i1][i2];
		}
	}
	*/
	printf("%d", sum);
}
