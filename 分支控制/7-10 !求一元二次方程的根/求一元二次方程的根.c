//https://pintia.cn/problem-sets/1103503795084578816/problems/1103503863363653636

#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, bac, x1, x2, s1;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	bac = b*b - 4*a*c;
//	printf("%lf", bac);
	if(a==0 && b!=0 && c!=0) printf("%.2lf", -c/b);
	if(bac> 0&& a!=0){
		x1= ( -b  + sqrt(bac) ) / (2*a);
		x2= ( -b  - sqrt(bac) ) / (2*a);
		if(x1>x2) printf("%.2lf\n%.2lf", x1, x2);
	}
	if(bac==0 && a!=0) printf("%.2lf", -b/(2*a) );
	if(bac<0 && b!=0){
		x1= (   + sqrt(-bac) ) / (2*a);
		x2= (   - sqrt(-bac) ) / (2*a);
		s1= -b /(a*2);
		printf("%.2lf+%.2lfi\n%.2lf%.2lfi", s1, x1, s1, x2);
	}
	if(a!=0 && b==0 && c!=0) printf("%.2lf\n%.2lf", sqrt(fabs(c/a)), -1*sqrt(fabs(c/a)));
	if(a==b && b==c && c==0) printf("Zero Equation");
	if(a==0 && b==0 && c!=0) printf("Not An Equation");
	
}
