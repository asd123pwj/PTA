//https://pintia.cn/problem-sets/1103525610276245504/problems/1103526249970520069

#include <stdio.h>

int main(){
	double H[21], W[21], BZ[21], pd[21];
	int N, i;
	
	scanf("%d", &N);
	for(i=0;	i<N;	i++){
		scanf("%lf %lf", &H[i], &W[i]);
		
		BZ[i] = (H[i]-100)*0.9*2;
		
		pd[i]=(W[i]-BZ[i])/BZ[i];
		//printf("%lf,%lf   ", BZ[i], pd);
	}
	
	for(i=0;	i<N;	i++){
		if(pd[i]<=-0.1) printf("You are tai shou le!");
		else if(pd[i]>=0.1) printf("You are tai pang le!");
			else printf("You are wan mei!");
		if(i==N-1) break;
		printf("\n");
	}
	
//	printf("%.1lf", (H-100)*0.9*2);
}
