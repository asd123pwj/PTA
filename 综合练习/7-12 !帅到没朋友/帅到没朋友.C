//https://pintia.cn/problem-sets/1103525610276245504/problems/1103525892859088899
#include <stdio.h>

int main(){
	int N, K, ID[1000];
	int i, i2, i3=0, K2, ID2[1000], pd=0, pd2=1, i4, pd3=0;
	char ID3[1000][5],ID4[1000][6];
	
	scanf ("%d", &N);
	for (i=0;	i<N;	i++){
		scanf ("%d", &K);
		
		for (i2=0;	i2<K;	i2++, i3++){
			scanf ("%d",&ID[i3]);
		}
	}
	
	scanf("%d", &K2);
	
	for (i=0;	i<K2;	i++){
		scanf ("%s", &ID3[i]);
		
		//gets(ID3[i]);
		
	}
	
	
	for (i=0;	i<K2;	i++){
		//scanf ("%s", &ID3[i]);
	//	ID3[i][5]='\0';
		ID2[i]= ID3[i][0]-'0'+ (ID3[i][1]-'0')*10 + (ID3[i][2]-'0')*100 + (ID3[i][3]-'0')*1000 + (ID3[i][4]-'0')*10000;
		
		for(i4=0;	i4<i;	i4++){
			if (ID2[i]==ID2[i4]){
				pd3=1;
			}
		}
		if (pd3){
			i--;
			K2--;
			pd3=0;
			continue;
		}
		
		for (i2=0;	i2<i3;	i2++){
			if (ID2[i]==ID[i2]) {
				
				pd++;
				pd2 = 0;
				
				break;
			}
		}
		
		if (pd2 && i!=K2) {
			for(i2=0;	i2<5;	i2++){
				ID4[i][i2]=ID3[i][i2];
				//printf("%c", ID3[i][i2]);
				
			}
			ID4[i][5]=' ';
			printf("%s", ID4[i]);
		}
		//printf("%s ", &ID3[i]);
		if (pd2 && i==K2) {
			for(i2=0;	i2<5;	i2++){
				ID4[i][i2]=ID3[i][i2];
				//printf("%c", ID3[i][i2]);
				
			}
			ID4[i][5]='\0';
			printf("%s", ID4[i]);
		}
		//printf("%s", &ID3[i]);
		pd2 = 1;
	}
	
	for(i=0;	i<K2;	i++){
		printf("%s", ID4[i]);
	}
	
	
	
	if(pd==K2) printf("No one is handsome");
}
