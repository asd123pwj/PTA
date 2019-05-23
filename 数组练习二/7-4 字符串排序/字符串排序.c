//https://pintia.cn/problem-sets/1103524409476370432/problems/1103524468511199235

#include <stdio.h>
#include <string.h>

int main(){
	char s[6][81], b[81];
	int i, i2, i3, i4, pd, a[6]={0,0,0,0,0,0};
	for(i=0;	i<5;	i++){
		scanf("%s", &s[i]);
	}
	
	for(i=0;	i<1;	i++){
		for(i4=0;	i4<4;	i4++){
			if(s[i3][i]==s[i3+1][i]) a[i3]=1;
		}
		for(i2=0;	i2<4;	i2++){
			pd=0;
			for(i3=0;	i3<4;	i3++){
				if( s[i3][i]>s[i3+1][i] && a[i3]!=1){
					strcpy(b, s[i3]);
					strcpy(s[i3], s[i3+1]);
					strcpy(s[i3+1], b);
					a[i3]=0;
					
				}
			}
		}
		
	}
	
	
	printf("After sorted:\n");
	for(i=0;	i<5;	i++){
		printf("%s", s[i]);
		
		if(i!=4) printf("\n");
	}
}
