//https://pintia.cn/problem-sets/1103525610276245504/problems/1103526249970520070

#include <stdio.h>

int main(){
	int Day[10], hh[10], mm[10], N, i, h1=0, m1=0, d1=0;
	scanf("%d", &N);
	for(i=0;	i<N;	i++){
		scanf("%d %d:%d", &Day[i], &hh[i], &mm[i]);
	}
	
	for(i=0;	i<N;	i++){
		h1=m1=d1=0;
		if(hh[i]%2) m1+=30;
		switch(Day[i]){
			case 0: d1=0, h1=hh[i], m1=mm[i]; break;
			case 1: d1=1, h1=hh[i]/2, m1+=mm[i]/2; break;
			case 2: {if(hh[i]%2) m1+=0; d1=1, h1+=12+hh[i]/2, m1+=mm[i]/2;}	break;;	
			case 3: d1=2; h1=hh[i]/2, m1+=mm[i]/2; break;
			case 4: {if(hh[i]%2) m1+=0; d1=2, h1=12+hh[i]/2, m1+=mm[i]/2;}	break;;
			case 5: d1=3; h1=hh[i]/2, m1+=mm[i]/2; break;
			case 6: {if(hh[i]%2) m1+=0; d1=3, h1=12+hh[i]/2, m1+=mm[i]/2;}	break;;
		}
		printf("%d %02d:%02d", d1, h1, m1);
		if(i<N-1) printf("\n");
		
	}
	
	
}
