//https://pintia.cn/problem-sets/1103523868394377216/problems/1103523936677646336

#include <stdio.h>

int main(){
	int n, sz[10], i;
	scanf("%d", &n);
	for(i=0;	i<n;	i++){
		scanf("%d", &sz[i]);
	}
	for(i=n-1;	i>=0;	i--){
		printf("%d", sz[i]);
		if(i) printf(" ");
	}
}
