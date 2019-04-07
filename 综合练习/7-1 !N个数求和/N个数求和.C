#include <stdio.h>>

int main(){
	int N, i=1, a[99], b[99], c[99], i2=0, d=1, sum=0, k=1;
	
	scanf("%d", &N);
	
	while(i2<N){
		i2++;
		scanf("%d/%d", &a[i2-1], &b[i2-1]);
	}//输入分子分母 
	

	
	i2=0;
	while(i2<N){
		i2++;
		d=d*b[i2-1];
	}//获取了分母的公倍数 ??????
	
	i2=0;
	while(i2<N){
		i2++;
		c[i2-1]=a[i2-1]*(d/b[i2-1]);
	}
	
	i2=0;
	while(i2<N){
		i2++;
		sum= sum+ c[i2-1];
	}//计算分子和 
	
	i=sum%d;
	while(i){
		if (sum%d%i==0 &&d%i==0) {
			k=i;
			
			break;
		}
		i--;
	}
	
	if(d/k<0){
		d*=-1;
		sum*=-1;
	}
	
	if(sum/d==0) printf("%d/%d", sum%d/k, d/k);
	else if(sum%d) printf("%d %d/%d", sum/d, sum%d/k, d/k);
		 else printf("%d", sum/d);
	
} 
