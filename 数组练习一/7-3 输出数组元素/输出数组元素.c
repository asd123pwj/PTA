//https://pintia.cn/problem-sets/1103523868394377216/problems/1103523936677646338

#include <stdio.h>

int main(){
	int n, sz[10], i;
	scanf("%d", &n);
	for(i=0;	i<n;	i++){
		scanf("%d", &sz[i]);
	}
	for(i=0;	i<n-1;	i++){
		printf("%d", sz[i+1]-sz[i] );
		if(i!=2 && i!= 5 && i!=n-2) printf(" ");
		else if( i!=n-2) printf("\n");
	}
	
	
}
