//https://pintia.cn/problem-sets/1103523868394377216/problems/1103523936677646340
//��֪��Ϊʲô֮ǰ�Ǹ�һֱ����������λ�һ���㷨���������ֲ�ͬ�ĸ���

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
int get4(int y2){ //��y2����λ�õ�����������d 
	
	d[0]= y2%10;	//�� 
	d[1]= y2/10%10;	//ʮ 
	d[2]= y2/100%10;	//�� 
	d[3]= y2/1000;	//ǧ 
	//printf("   %d!!", a);
	return 0;
}

int diff(void){//�������ж��м�����ͬ������ 
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
 
