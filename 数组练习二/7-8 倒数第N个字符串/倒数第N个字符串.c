//https://pintia.cn/problem-sets/1103524409476370432/problems/1103524468511199239

#include <stdio.h>

int main(){
	int L, N, i=0, n=0;
	char s[]="zzzzzz";
	
	scanf("%d%d", &L, &N);
	s[L]='\0';
	
	while(n++<N){
		//if(n>=N) break;
		if(n-1) s[L-1]=s[L-1]-1;
		
		if(s[L-1]<'a') {
			s[L-1]='z';
			s[L-2]=s[L-2]-1;
			{
				if(s[L-2]<'a' && L>2) {
					s[L-2]='z';
					if(L>2) s[L-3]=s[L-3]-1;
					{
						if(s[L-3]<'a' && L>3) {
							s[L-3]='z';
							if(L>3) s[L-4]=s[L-4]-1;
							if(s[L-4]<'a' && L>4) {
								s[L-4]='z';
								if(L>4) s[L-5]=s[L-5]-1;
								{
									if(s[L-5]<'a' && L>5) {
										s[L-5]='z';
										if(L>5) s[L-6]=s[L-6]-1;
									}
								}
							}
						}
					}
				}	
			}
		}
	}
	printf("%s", s);
}
