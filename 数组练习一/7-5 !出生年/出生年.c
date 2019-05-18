//https://pintia.cn/problem-sets/1103523868394377216/problems/1103523936677646340



#include <stdio.h>

int main(){
	int y, n, k, i, i2, a1, a2, a3, a4, y2;
	
	scanf("%d%d", &y, &n);
	
	y2=y;
	
		switch (n){
			case 4:{
				while(i){
					a1= y2/1000;
					a2= y2/100%10;
					a3= y2/10%10;
					a4= y2%10;
					y2++;
					//printf("!!%d %d %d %d!! ", a1, a2, a3, a4); 
					if(a1!=a2 && a1!=a3 && a1!=a4 && a2!=a3 && a2!=a4 && a3!=a4){
						break;
					}
				}
				break;
			}
			case 3:{
				while(i){
					a1= y2/1000;
					a2= y2/100%10;
					a3= y2/10%10;
					a4= y2%10;
					y2++;
					//printf("!!%d %d %d %d!! ", a1, a2, a3, a4); 
					if( (a1==a2 && a2!=a3 && a3!=a4 && a2!=a4) || /* 12 */
						(a1!=a2 && a2!=a4 && a3!=a4 && a1==a3) || /* 13 */
						(a1!=a2 && a2!=a3 && a3!=a4 && a1==a4) || /* 14 */
						(a1!=a2 && a2==a3 && a3!=a4 && a1!=a4) || /* 23 */
						(a1!=a2 && a2!=a3 && a3!=a1 && a2==a4) || /* 24 */
						(a1!=a2 && a2!=a3 && a3==a4 && a1!=a4) )  /* 34 */{
						break;
					}
				}
				break;
			}
			case 2:{
				while(i){
					a1= y2/1000;
					a2= y2/100%10;
					a3= y2/10%10;
					a4= y2%10;
					y2++;
					//printf("!!%d %d %d %d!! ", a1, a2, a3, a4); 
					if( (a1==a2 && a2==a3 && a3!=a4) || (a1==a2 && a2!=a3 && a2==a4) || (a1!=a2 && a1==a3 && a3!=a4) || (a1!=a2 && a2==a3 && a3==a4) ){
						break;
					}
				}
				break;
			}
		}
	
		
	printf("%d %04d", y2-y-1, y2-1);	
}
