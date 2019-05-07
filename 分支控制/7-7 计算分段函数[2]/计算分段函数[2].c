//https://pintia.cn/problem-sets/1103503795084578816/problems/1103503863363653633

#include <stdio.h>
#include <math.h>

int main(){
	double fx, x, result;
	
	scanf("%lf", &x);
	if(x>=0) {
		result = sqrt(x);
	}
	else{
		result=( (x+1)*(x+1) + 2*x + 1/x);
	}
	printf("f(%.2lf) = %.2lf", x, result);
}
