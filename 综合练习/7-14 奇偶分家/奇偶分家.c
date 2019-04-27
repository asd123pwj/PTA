//https://pintia.cn/problem-sets/1103525610276245504/problems/1103525892859088901

#include <stdio.h>

int main(){
	int N, zs[1000];
	int i, js=0, os=0;
	
	scanf("%d", &N);
	for(i=0;	i<N;	i++){
		scanf("%d", &zs[i]);
		if(zs[i]%2){
			js++;
		}
		else{
			os++;
		}
	}
	printf("%d %d", js, os);
	
	
}
