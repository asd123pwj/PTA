//https://pintia.cn/problem-sets/1103503795084578816/problems/1103503863363653637

#include <stdio.h>

int main(){
	double A, B, s;
	double *pa, *pb, *ps;
	
	scanf("%lf%lf", &A, &B);
	pa=&A;
	pb=&B;
	ps=&s;
	
	if(*pb==0) printf("%.0lf/0=Error", *pa, *pb);
	
	if(*pb<0){
		printf("%.0lf/(%.0lf)=%.2lf", *pa, *pb, A/B);
	}
	if(*pb>0){
		printf("%.0lf/%.0lf=%.2lf", *pa, *pb, A/B);
	}
}
