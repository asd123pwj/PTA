//https://pintia.cn/problem-sets/1103523868394377216/problems/1103523936677646337

#include <stdio.h>

int main(){
	int N, sz[10], max=0, min=0, i, pd=1;
	scanf("%d", &N);
	for(i=0;	i<N;	i++){
		scanf("%d", &sz[i]);
	}
	for(i=0;	i<N;	i++){
		if(sz[i]>sz[max]) max=i;
		if(sz[i]<sz[min]) min=i;
		if(i==N-1 && pd) {
			pd=sz[min];
			sz[min]=sz[0];
			sz[0]=pd;
			pd=0;
			i=0;
			continue;
		}
		if(i==N-1) {
			
			pd=sz[max];
			sz[max]=sz[N-1];
			sz[N-1]=pd;
		}
		
	}
	
	for(i=0;	i<N;	i++){
		
		printf("%d ", sz[i]);
		
		//if(i!=N-1) printf(" ");
	}
	
}
