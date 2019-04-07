#include <stdio.h>

#define MAXN 10

int even( int n){
	int jo=0;
	if(n%2==0) jo=1;
	return jo;
} 

int OddSum(int List[], int N){
	int sum=0, i=0;
	while(i<=N){
	
	if(even(List[i])==0) sum+=List[i];
	i++;
	
}

return sum;
}

int main()
{    
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for ( i=0; i<N; i++ ) {
        scanf("%d", &List[i]);
        if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}
