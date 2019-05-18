//https://pintia.cn/problem-sets/1103523868394377216/problems/1103523936677646339

#include <stdio.h>

int main(){
	int k, n, sz[100], i, k2, i2;
	scanf("%d%d", &n, &k);
	for(i=0;	i<n;	i++){
		scanf("%d", &sz[i]);
	}
	for(i2=0;	i2<k;	i2++){
		for(i=0;	i<n-1;	i++){
			if(sz[i]>sz[i+1]){
				k2=sz[i];
				sz[i]=sz[i+1];
				sz[i+1]=k2;
			
			}
		}
	}
	
	for(i=0;	i<n;	i++){
		printf("%d", sz[i]);
		if(i!=n-1) printf(" ");
	}
} 
