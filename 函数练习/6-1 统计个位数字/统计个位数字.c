#include <stdio.h>

/*
本题要求实现一个函数，可统计任一整数中某个位数出现的次数。例如-21252中，2出现了3次，则该函数应该返回3。
函数接口定义：int Count_Digit ( const int N, const int D );
其中N和D都是用户传入的参数。N的值不超过int的范围；D是[0, 9]区间内的个位数。函数须返回N中D出现的次数。
*/

int Count_Digit ( const int N, const int D){
  int cs=0, t=1, yq, n=N;
  	 	if(n<0) n=n*(-1);
	if(D){
 	 while(n/t){
		yq = (n-(n/(t*10)*(t*10)))/t;
		if(yq/D == 1 && yq%D == 0)  ++cs
 	 ;
		t*=10;
	  }
}	
	else{
		if(n == 0) cs=1;
		else{
		
			while(n/t){
			yq= n-n/(t*10)*(t*10);
			if(yq/t == 0) cs++;
			t*=10;
			}	
		}
		
	}
  
  return cs;
  
}


/*
int main(void){
	
	int cs=0, t=1, yq, N, D;
  scanf("%d%d",&N, &D);
  
  while(N/t){
	yq = (N-(N/(t*10)*(t*10)))/t;
	printf("yq=%d ",yq);
  if(yq/D == 1 && yq%D == 0)  printf("%d ",++cs);
  t*=10;
  printf("%d ",t);
  }
  
  printf("%d",cs);
  
}
*/


int main()
{
    int N, D;
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

