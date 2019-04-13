#include <stdio.h>


int main(){
	char ID[100][18], M;
	int i=0, i2, k, pd=1, pd2=0, z, m, sum, i3;
	
	scanf("%d", &k);
	while(i<k){
		scanf("%s", &ID[i]);
		i++;
	}
	
	i=0;
	 
	
	if(i==0){
		pd2=0;
		{//z的取值 
		 
		for(i2=0;	i2<=16;	i2++){
			ID[i][i2]-=48;
		}
		
		z=ID[i][0]*7+ID[i][1]*9+ID[i][2]*10+ID[i][3]*5+ID[i][4]*8+ID[i][5]*4+ID[i][6]*2+ID[i][7]*1+ID[i][8]*6+ID[i][9]*3+ID[i][10]*7+ID[i][11]*9+ID[i][12]*10+ID[i][13]*5+ID[i][14]*8+ID[i][15]*4+ID[i][16]*2;
		z=z%11;
		
		for(i2=0;	i2<=16;	i2++){
			ID[i][i2]+=48;
		}
	}
		for(i2=0;	i2<=16;	i2++){
			if('0'>ID[i][i2] || ID[i][i2]>'9') {
			pd=0; 
			for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		
			pd2=1;
			break;
			}
		}
		
		
		
		if(pd2==0) {
		
			switch(z){
				case 0: if(ID[i][17]!='1') {pd=0; for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
				case 1: if(ID[i][17]!='0') {pd=0;for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
				case 2: if(ID[i][17]!='X') {pd=0;for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
				case 3: if(ID[i][17]!='9')  {pd=0;for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
				case 4: if(ID[i][17]!='8')  {pd=0;for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
				case 5: if(ID[i][17]!='7')  {pd=0;for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
				case 6: if(ID[i][17]!='6') {pd=0;for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
				case 7: if(ID[i][17]!='5') {pd=0;for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
				case 8: if(ID[i][17]!='4') {pd=0;for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
				case 9: if(ID[i][17]!='3') {pd=0;for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
				case 10: if(ID[i][17]!='2') {pd=0;for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			}
		}
	
	
	}

	for(i=1;	i<k;	i++){
		pd2=0;
		{//z的取值 
		 
		for(i2=0;	i2<=16;	i2++){
			ID[i][i2]-=48;
		}
		
		z=ID[i][0]*7+ID[i][1]*9+ID[i][2]*10+ID[i][3]*5+ID[i][4]*8+ID[i][5]*4+ID[i][6]*2+ID[i][7]*1+ID[i][8]*6+ID[i][9]*3+ID[i][10]*7+ID[i][11]*9+ID[i][12]*10+ID[i][13]*5+ID[i][14]*8+ID[i][15]*4+ID[i][16]*2;
		z=z%11;
		
		for(i2=0;	i2<=16;	i2++){
			ID[i][i2]+=48;
		}
	}
		for(i2=0;	i2<=16;	i2++){
			if('0'>ID[i][i2] || ID[i][i2]>'9') {
			pd=0; 
		//	ID[i][18]='\0';
		
		//	ID[i][18]='\0';
		//	puts(ID[i]); 
			printf("\n");
			for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		
			
			pd2=1;
			
			break;
			}
		}
		
		//if(pd==0) continue;
		
		if(pd2) continue;
		switch(z){
			case 0: if(ID[i][17]!='1')  {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			case 1: if(ID[i][17]!='0')  {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			case 2: if(ID[i][17]!='X')  {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			case 3: if(ID[i][17]!='9')  {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			case 4: if(ID[i][17]!='8')  {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			case 5: if(ID[i][17]!='7')  {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			case 6: if(ID[i][17]!='6')  {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			case 7: if(ID[i][17]!='5')  {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			case 8: if(ID[i][17]!='4')  {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			case 9: if(ID[i][17]!='3')  {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
			case 10: if(ID[i][17]!='2') {pd=0; printf("\n"); for(i2=0; i2<=17;	i2++)  printf("%c",ID[i][i2]);		 }break;
		}
		

	}


	if(pd) printf("All passed");
	
}
