//https://pintia.cn/problem-sets/1103503795084578816/problems/1103503863363653632

#include <stdio.h>

int main(){
	int Pa, Pb, a=0, b=3, p1, p2, p3;
	
	scanf("%d%d%d%d%d", &Pa, &Pb, &p1, &p2, &p3);
	if(p1==0) a++, b--;
	if(p2==0) a++, b--;
	if(p3==0) a++, b--;
	
	if(a==3) {
		printf("The winner is a: %d + 3", Pa);
		return 0;
	}
	if(b==3) {
		printf("The winner is b: %d + 3", Pb);
		return 0;
	}
	if(Pa>Pb) printf("The winner is a: %d + %d", Pa, a);
	else printf("The winner is b: %d + %d", Pb, b);
}
