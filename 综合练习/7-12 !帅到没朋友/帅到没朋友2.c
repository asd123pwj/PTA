//https://pintia.cn/problem-sets/1103525610276245504/problems/1103525892859088899

#include <stdio.h>
#include <string.h>

int cz();

int main(){
	int N, K[101], M, i1, i2, pd=1, W[10001], n=0, pd2;
	char ID[101][1001][6], WID[10001][6];
	
	//输入
	scanf("%d", &N);
	for(i1=0;	i1<N;	i1++){
		scanf("%d", &K[i1]);
		for(i2=0;	i2<K[i1];	i2++){
			scanf("%s", &ID[i1][i2]);
			//printf("%s  ", ID[i1][i2]);
		}
	} 
	//printf("!!");
	scanf("%d", &M);
	for(i1=0;	i1<M;	i1++){
		scanf("%s", &WID[i1]);
		//printf("%s???  ", WID[i1]);
		
		if(cz(ID, N, K, WID[i1])==0) {	//输入待查询WID后直接判断是否存在，若存在，将WID位置记录下来 
			W[n++]=i1;
			if(pd) pd=0;
		}
		else ;
	}
	
	//输出 
	for(i1=0;	i1<n;	i1++){
		
		pd2=0;
		for(i2=0;	i2<i1;	i2++) {
			if( strcmp(WID[W[i1]], WID[W[i2]]) == 0) pd2=1;	
			if(pd2) continue;
		}
		if(pd2) continue;
		if(i1) printf(" ");
		printf("%s", WID[W[i1]]);
		
		
	}
	if(pd) printf("No one is handsome");
	
	//printf("a");
}

int cz(char ID[101][1001][6], int N, int K[101], char WID[6]){	//判断WID是否存在于ID列表中 
	int i1, i2;
	for(i1=0;	i1<N;	i1++){
		for(i2=0;	i2<K[i1];	i2++){
			if(strcmp(ID[i1][i2], WID)==0) return 1;
			
		}
	}
	
	return 0;
}
