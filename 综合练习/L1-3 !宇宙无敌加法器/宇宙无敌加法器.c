//https://pintia.cn/problem-sets/1103525610276245504/problems/1103526249970520065

#include <stdio.h>
#include <string.h>

int main(){
	char N[21], PAT1[21], PAT2[21];
	int i, LN, LP1, LP2, sum=0, w1=0, w2=0, jz, t=1, ws=0, k=0;
	scanf("%s%s%s", &N, &PAT1, &PAT2);
	LN=strlen(N)-1;
	LP1=strlen(PAT1)-1;
	LP2=strlen(PAT2)-1;
	
	
	
	for(i=LN, t=1;	i>=0;	i--, t*=10){
		if(N[i]=='0') jz=10;
		else jz=(N[i]-'0');
		
		if(LP1-(LN-i)>=0) w1=PAT1[i-(LN-LP1)]-'0'; else w1=0;
		if(LP2-(LN-i)>=0) w2=PAT2[i-(LN-LP2)]-'0'; else w2=0;
		w1+=k;
		ws=(w1+w2)%jz;
		k=(w1+w2)/jz;
		sum+=ws*t;
		
	//	printf("%d\n", jz);
		
		
		//printf("   %d,%d   \n", K[i+1], K[i+2]);
	}
	sum+=k*t;
	printf("%d", sum);
	//printf("%s%s%s", N, PAT1, PAT2);
	
}


