//https://pintia.cn/problem-sets/1103524409476370432/problems/1103524468511199238

#include <stdio.h>
#include <string.h>

int main(){
	char tel[12]="abdefghijkl", d[11], d2[1];
	int c[12];
	int i1, n=0, i2, pd;
	
	scanf("%s", &tel);
	
	for(i1=0;	i1<11;	i1++){
		pd=1;
		for(i2=i1-1;	i2>=0;	i2--){
			if(tel[i1]==tel[i2]) {
				//c[i1]=c[i2];
				pd=0;
				break;
			}
		}
		if(pd) {
			d[n]=tel[i1];
			//c[i1]=n;
			n++;
		}
	}
	

	for(i1=0;	i1<n;	i1++){
		for(i2=0;	i2<n-1;	i2++){
			if( d[i2]<d[i2+1]) {
				d2[0]=d[i2];
				d[i2]=d[i2+1];
				d[i2+1]=d2[0];
			
			}
		}
	}
	
	
	printf("int[] arr = new int[]{");
	for(i1=0;	i1<n;	i1++){
		printf("%c", d[i1]);
		if(i1!=n-1) printf(",");
	}
	printf("};\n");
	printf("int[] index = new int[]{");
	for(i1=0;	i1<11;	i1++){
		for(i2=0;	i2<n;	i2++){
			if(tel[i1]==d[i2]) printf("%d", i2);
		}
		if(i1!=10) printf(",");
	}
	printf("};");
}
