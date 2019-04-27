//https://pintia.cn/problem-sets/1103525610276245504/problems/1103526249970520064

#include <stdio.h>
#include <string.h>

int main(){
	int N;
	char str[1001];
	int i, i2, t=0, n1;
	char str2[100][1001];
	
	scanf("%d", &N);
	getchar();
	gets(str);
	n1=strlen(str);
	for(i=0;	i<N+N;	i++){
		str[n1+i]=' ';
	}	
	
	for(i=n1/N;	i>=0;	i--){
		for(i2=0;	i2<N;	i2++,t++){
			str2[i2][i]=str[t];
			
		}
		
	} 
	//printf("%d\n",n1/N); 
	if(N!=1){
	
		for(i=0;	i<N;	i++){
			printf("%s", str2[i]);
			if(i<N-1) printf("\n");
		}
	}
	else{
		for(i=n1-1;	i>=0;	i--){
			
			printf("%c", str[i]);
		}
	}
}
