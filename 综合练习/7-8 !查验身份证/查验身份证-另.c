#include <stdio.h>

int main(){
	char ID[100][18];
	int i1, i2, N, num[100][18], pd=1, z;
	
	{	//输入N个ID，之后输入各个ID 
		scanf("%d", &N);
		for(i1=0;	i1<N;	i1++){
			scanf("%s", &ID[i1]);
		}
	}
	
	
		for (i1=0;	i1<N-1;	i1++){	//第N个另外算，防止换行 
			pd=1;
			{	//判断前17位是否有字母
				for(i2=0;	i2<=16;	i2++){
					if(ID[i1][i2]>'9' || ID[i1][i2]<'0'){
						pd=0;
						
						for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n");
						break; 
					}
				} 
			}
			if(pd==0) continue;
			{	//计算Z ,并判断是否正确 
				for(i2=0;	i2<=16;	i2++){
					num[i1][i2]= ID[i1][i2]-48;
				}
				z=num[i1][0]*7+num[i1][1]*9+num[i1][2]*10+num[i1][3]*5+num[i1][4]*8+num[i1][5]*4+num[i1][6]*2+num[i1][7]*1+num[i1][8]*6+num[i1][9]*3+num[i1][10]*7+num[i1][11]*9+num[i1][12]*10+num[i1][13]*5+num[i1][14]*8+num[i1][15]*4+num[i1][16]*2;
				z=z%11;
				
				switch(z){
					case  0:	if(ID[i1][17]!= '1')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					case  1:	if(ID[i1][17]!= '0')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					case  2:	if(ID[i1][17]!= 'X')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					case  3:	if(ID[i1][17]!= '9')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					case  4:	if(ID[i1][17]!= '8')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					case  5:	if(ID[i1][17]!= '7')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					case  6:	if(ID[i1][17]!= '6')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					case  7:	if(ID[i1][17]!= '5')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					case  8:	if(ID[i1][17]!= '4')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					case  9:	if(ID[i1][17]!= '3')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					case 10:	if(ID[i1][17]!= '2')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); printf("\n"); }break;
					
				}
			}
			
			
		}
		
		for (i1=N-1;	i1<=N-1;	i1++){	//第N个另外算，防止换行 
			pd=1;
			{	//判断前17位是否有字母
				for(i2=0;	i2<=16;	i2++){
					if(ID[i1][i2]>'9' || ID[i1][i2]<'0'){
						pd=0;
						for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); 
						break; 
					}
				} 
			}
			if(pd==0) continue;
			{	//计算Z ,并判断是否正确 
				for(i2=0;	i2<=16;	i2++){
					num[i1][i2]= ID[i1][i2]-48;
				}
				z=num[i1][0]*7+num[i1][1]*9+num[i1][2]*10+num[i1][3]*5+num[i1][4]*8+num[i1][5]*4+num[i1][6]*2+num[i1][7]*1+num[i1][8]*6+num[i1][9]*3+num[i1][10]*7+num[i1][11]*9+num[i1][12]*10+num[i1][13]*5+num[i1][14]*8+num[i1][15]*4+num[i1][16]*2;
				z=z%11;
				
				
				switch(z){
					case  0:	if(ID[i1][17]!= '1')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					case  1:	if(ID[i1][17]!= '0')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					case  2:	if(ID[i1][17]!= 'X')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					case  3:	if(ID[i1][17]!= '9')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					case  4:	if(ID[i1][17]!= '8')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					case  5:	if(ID[i1][17]!= '7')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					case  6:	if(ID[i1][17]!= '6')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					case  7:	if(ID[i1][17]!= '5')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					case  8:	if(ID[i1][17]!= '4')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					case  9:	if(ID[i1][17]!= '3')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					case 10:	if(ID[i1][17]!= '2')	{pd=0; for(i2=0;	i2<=17;	i2++) printf("%c", ID[i1][i2]); } break;
					
				}
				
			}
			
			
		}
	
		if(pd) printf("All passed");
} 
