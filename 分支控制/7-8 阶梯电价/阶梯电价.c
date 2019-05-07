//https://pintia.cn/problem-sets/1103503795084578816/problems/1103503863363653634

#include <stdio.h>

int main(){
	double w, cost=1;
	
	scanf("%lf", &w);
	if(w<0) {
		printf("Invalid Value!");
		return 0;
	}
	if(w<=50) cost=0.53*w;
	else cost= 26.5 + 0.58*(w-50);
		
	printf("cost = %.2lf", cost);
}	
