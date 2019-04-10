#include <stdio.h>

int main(){
	char A[9999], B[9999];
	int i, na, nb, k,i2;

	gets(A);
	gets(B);

	for(i=0;	A[i]!='\0';	i++) na=i+1;	//得出A的长度
	for(i=0;	B[i]!='\0';	i++) nb=i+1;	//得出A的长度


	for(i=0;	i<=na-1;	i++){
		for(i2=0,k=1;	i2<=nb-1;	i2++){
			if(A[i]==B[i2]) k=0;
		}
		if(k) printf("%c", A[i]);
	}

}
