//https://pintia.cn/problem-sets/1103524409476370432/problems/1103524468511199236

#include <stdio.h>
#include <string.h>

int main(){
	int i, n, l[21], pd;
	char sz[21][11], s[11];
	
	for(n=0;	1;	n++){
		gets(sz[n]);
		l[n]=strlen(sz[n]);
		if(sz[n][0]=='#') break;
	}
	while(1){
		pd=1;
		for(i=0;	i<n-1;	i++){
			l[i]=strlen(sz[i]);
			l[i+1]=strlen(sz[i+1]);
			if(l[i]>l[i+1]) {
				strcpy(s, sz[i]);
				strcpy(sz[i], sz[i+1]);
				strcpy(sz[i+1], s);
				pd=0;
			}
		}
		if(pd) break;
		
	}
	
	
	for(i=0;	i<n;	i++){
		printf("%s ", sz[i]);
	}
}
