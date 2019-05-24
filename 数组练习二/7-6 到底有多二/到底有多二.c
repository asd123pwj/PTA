//https://pintia.cn/problem-sets/1103524409476370432/problems/1103524468511199237
#include <stdio.h>

void print();
void main(){
	char N[50];
	int  i, t;
    
	double output, n=0, k=1;
	
	scanf("%s", &N);
	
	for(t=0;	N[t]!='\0';	t++);
	t--;
	if((N[t]-'0')%2==0) k*=2;
	
	if(N[0]=='-') {
		k*=1.5;
		for(i=1;	i<=t;	i++){
			if(N[i]=='2') n+=1;
		}
		output= (n/(t))*k*100.0;
	}
	else {
		for(i=0;	i<=t;	i++){
			if(N[i]=='2') n+=1;
		
		}
		output= (n/(t+1))*k*100.0;
	}
	
	
	
	printf("%.2lf%%", output);
	
	


}

