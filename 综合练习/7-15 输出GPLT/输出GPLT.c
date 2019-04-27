//https://pintia.cn/problem-sets/1103525610276245504/problems/1103525892859088902

#include<stdio.h>
#include<string.h>

int counth(char GPLT[10001],char str);

int main(){
	char GPLT[10001];
	int i=0, pd=1; 
	
	scanf("%s", &GPLT);
	while(1){
		pd=1;
		if(i<counth(GPLT, 'G')) pd=0,printf("G");
		if(i<counth(GPLT, 'P')) pd=0,printf("P");
		if(i<counth(GPLT, 'L')) pd=0,printf("L");
		if(i<counth(GPLT, 'T')) pd=0,printf("T");
		i++;
		if(pd) break;
	}
}

int counth(char GPLT[10001],char str){
	int i2, sc=0;
	for(i2=0, sc=0;	i2<strlen(GPLT);	i2++){
		if(GPLT[i2]==str || GPLT[i2]==str+('a'-'A')) sc++;
	}
	return sc;
}

