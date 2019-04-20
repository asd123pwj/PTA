//https://pintia.cn/problem-sets/1103525610276245504/problems/1103525892859088898
#include <stdio.h>

int main(){
	int A, B, N, AS[100], AA[100], BS[100], BA[100];
	int i, AD=0, BD=0;
	
	scanf("%d%d%d", &A, &B, &N);
	
	for(i=0;	i<N;	i++){
		scanf("%d %d %d %d", &AS[i], &AA[i], &BS[i], &BA[i]);
	}
	for(i=0;	AD<=A&&BD<=B;	i++){
		if(AS[i]+BS[i] == AA[i]) AD++;
		if(AS[i]+BS[i] == BA[i]) BD++;
	}
	if(AD>A) printf("A\n%d", BD);
	if(BD>B) printf("B\n%d", AD);
	
}
