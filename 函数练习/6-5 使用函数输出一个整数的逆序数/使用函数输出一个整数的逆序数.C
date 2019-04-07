#include <stdio.h>
int reverse( int number){
	int  t=1, sc=0, x=1, t2=1;

	if(number<0) number*=-1, x=-1;

	while(number/t) t*=10;

	while(t/=10){
		sc=sc+number/t%10*t2;
	
		t2*=10;
	}
	
	
	sc*=x;
	return sc;
	
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
