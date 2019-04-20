//https://pintia.cn/problem-sets/1103525610276245504/problems/1103525892859088897

#include <stdio.h>

int main(){
	int hh, mm;
	char h[2], m[2];
	
	scanf("%d:%d", &hh, &mm);
	
	if (hh<10) h[0]='0', h[1]=hh+'0';
	else h[0]=hh/10 + '0', h[1]=hh%10 + '0'; 
	
	if (mm<10) m[0]='0', m[1]=mm+'0';
	else m[0]=mm/10 + '0', m[1]=mm%10 + '0'; 
	
	if((hh>=0 && hh<=11) || (hh==12 && mm==0)){
		printf("Only %c%c:%c%c.  Too early to Dang.", h[0], h[1], m[0], m[1]);
	}
	else{
		switch (hh){
			case 12 : printf("Dang"); break;
			case 13 : {
				if (mm==0) printf("Dang");
				else printf ("DangDang");
				break;
			}
			case 14: {
				if (mm==0) printf("DangDang");
				else printf ("DangDangDang");
				break;
			}
			case 15 : {
				if (mm==0) printf("DangDangDang");
				else printf ("DangDangDangDang");
				break;
			}
			case 16 : {
				if (mm==0) printf("DangDangDangDang");
				else printf ("DangDangDangDangDang");
				break;
			}
			case 17 : {
				if (mm==0) printf("DangDangDangDangDang");
				else printf ("DangDangDangDangDangDang");
				break;
			}
			case 18 : {
				if (mm==0) printf("DangDangDangDangDangDang");
				else printf ("DangDangDangDangDangDangDang");
				break;
			}
			case 19 : {
				if (mm==0) printf("DangDangDangDangDangDangDang");
				else printf ("DangDangDangDangDangDangDangDang");
				break;
			}
			case 20 : {
				if (mm==0) printf("DangDangDangDangDangDangDangDang");
				else printf ("DangDangDangDangDangDangDangDangDang");
				break;
			}
			case 21 : {
				if (mm==0) printf("DangDangDangDangDangDangDangDangDang");
				else printf ("DangDangDangDangDangDangDangDangDangDang");
				break;
			}
			case 22 : {
				if (mm==0) printf("DangDangDangDangDangDangDangDangDangDang");
				else printf ("DangDangDangDangDangDangDangDangDangDangDang");
				break;
			}
			case 23 : {
				if (mm==0) printf("DangDangDangDangDangDangDangDangDangDangDang");
				else printf ("DangDangDangDangDangDangDangDangDangDangDangDang");
				break;
			}
			
		}
	}
} 
