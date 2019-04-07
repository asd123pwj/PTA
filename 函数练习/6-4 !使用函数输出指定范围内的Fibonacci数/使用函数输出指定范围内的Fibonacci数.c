#include <stdio.h>

int fib( int n ){
	int fib[30]={1,1}, i=2;

	while(i<=n-1){
		fib[i]=fib[i-1]+fib[i-2];
		i++;
	}
	return fib[n-1];
}

void PrintFN( int m, int n ){
	int i=1;

	while(m>=fib(i)) i++;

	if(fib(i)>n) printf("No Fibonacci number");

	while(fib(i)<=n){
		printf("%d", fib(i));
	
		if(fib(++i)<=n) printf(" ");
	}
}



int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}
