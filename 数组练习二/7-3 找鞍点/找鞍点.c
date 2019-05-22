//https://pintia.cn/problem-sets/1103524409476370432/problems/1103524468511199234

#include <stdio.h>

int main(){
	int i1, i2, n, S[6][6], pd1=0, pd2=0, k;
	scanf("%d", &n);
	for(i1=0;	i1<n;	i1++){
		for(i2=0;	i2<n;	i2++){
			scanf("%d", &S[i1][i2]);
		}
	}
	
	for(i1=0;	i1<n;	i1++){
		for(i2=0;	i2<n;	i2++){
			pd1=pd2=0;
			for(k=0;	k<n;	k++){
				if( (S[i1][i2]<S[i1][k]) ) pd1++;
			}
			for(k=0;	k<n;	k++){
				if( (S[i1][i2]>S[k][i2]) ) pd2++;
			}
			if(pd1==0 && pd2==0) {
				printf("%d %d", i1, i2);
				return 0;
			}
		}
	}
	printf("NONE");
}

int max(int a[6][6], int n1, int n2, int n){
	int i1, i2;
	for(i1=0;	i1<n;	i1++){
		if( (a[n1][n2]<a[n1][i1]) ) return 1;
	}
	for(i1=0;	i1<n;	i1++){
		if( (a[n1][n2]>a[i1][n2]) ) return 1;
	}
	return 0;
}
