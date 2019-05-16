//https://pintia.cn/problem-sets/1103503795084578816/problems/1103503863363653638

#include <stdio.h>

int main(){
	double a, b;
	char c;
	
	scanf("%lf%c%lf", &a, &c, &b);
	
	if(c=='+') printf("%.2lf", a+b);
	if(c=='-') printf("%.2lf", a-b);
	if(c=='*') printf("%.2lf", a*b);
	if(c=='/'&& b==0) printf("The divisor is 0.");
	if(c=='/'&& b!=0) printf("%.2lf", a/b); 
}
