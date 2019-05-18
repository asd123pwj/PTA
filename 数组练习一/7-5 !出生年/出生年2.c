//https://pintia.cn/problem-sets/1103523868394377216/problems/1103523936677646340
//不知道为什么之前那个一直出错，所以这次换一个算法来区别数字不同的个数

#include <stdio.h>

int d[4];

int get4();
int diff();

int main(){
	int y, n, y2, i;
	
	scanf("%d%d", &y, &n);
	
	for(y2=y;	1;	y2++){
		get4(y2);
		if( diff() == n) break;
	}
	
	printf("%d %04d", y2-y, y2);
	
	
	
} 
int get4(int y2){ //将y2各个位置的数赋予数组d 
	
	d[0]= y2%10;	//个 
	d[1]= y2/10%10;	//十 
	d[2]= y2/100%10;	//百 
	d[3]= y2/1000;	//千 
	//printf("   %d!!", a);
	return 0;
}

int diff(void){//用数组判断有几个不同的数字 
	int i1, i2, k=0;
	for(i1=0;	i1<4;	i1++){
		for(i2=0;	i2<4;	i2++){
			
			if(d[i1]!=d[i2]) {
				k++;
			}
		}
		
	}
	//printf("%d", k);
	switch(k){
		case 12:{
			k=4;
			break;
		}	
		case 10:{
			k=3;
			break;
		}	
		case 6:{
			k=2;
			break;
		} 
		case 0:{
			k=1;
			break;
		}
	}
	return k;
}
 
