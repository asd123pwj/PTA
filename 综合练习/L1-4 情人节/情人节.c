//https://pintia.cn/problem-sets/1103525610276245504/problems/1103526249970520066

#include <stdio.h>

int main(){
	char Name[100][11];
	int i;
	
	for(i=0;	;	i++){
		gets(Name[i]); 
	//	puts(Name[i]);
		if(Name[i][0]=='.') break;
	}
	
	if(i>=13){
		printf("%s and %s are inviting you to dinner...", Name[1], Name[13]);
	}
	else if(i>1){
			printf("%s is the only one for you...", Name[1]);
	}
		else{
			printf("Momo... No one is for you ...");
		}
	
	
	
	
}
