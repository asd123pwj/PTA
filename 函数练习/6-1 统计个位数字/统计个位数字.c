#include <stdio.h>

/*
����Ҫ��ʵ��һ����������ͳ����һ������ĳ��λ�����ֵĴ���������-21252�У�2������3�Σ���ú���Ӧ�÷���3��
�����ӿڶ��壺int Count_Digit ( const int N, const int D );
����N��D�����û�����Ĳ�����N��ֵ������int�ķ�Χ��D��[0, 9]�����ڵĸ�λ���������뷵��N��D���ֵĴ�����
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

