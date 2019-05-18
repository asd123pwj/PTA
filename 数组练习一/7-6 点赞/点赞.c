//https://pintia.cn/problem-sets/1103523868394377216/problems/1103523936677646341

#include <stdio.h>
#include <math.h>

int main(){
	int N, K, F[1000][10], i1, i2, i3=0, i4=0, F2[10000], t=0, k2=0, F3[10000], max=0, F4[1000][10], m=0;
	
	scanf("%d", &N);
	for(i1=0;	i1<N;	i1++){
		scanf("%d", &K);
		t+=K;
		for(i2=0;	i2<K;	i2++, k2++){
			scanf("%d", &F[i1][i2]);
			F2[k2]= F[i1][i2];
		}
		
	}
	for(i1=0;	i1<t;	i1++){
		F3[i1]=0;
		F4[i4][i3]=0;
		for(i2=0;	i2<t;	i2++){
			if(F2[i1]==F2[i2]) F3[i1]++;
		}
		if(F3[i1]>F3[max]) max=i1, i3=0, F4[++i4][i3]=max;
			else if( F3[i1]==F3[max] ) F4[i4][i3++]=i1;
	}
	for(i1=0;	i1<i3;	i1++){
		if( F2[F4[i4][i1]]>m ) m=F2[F4[i4][i1]];
	}
	printf("%d %d", m, F3[max]);
}
