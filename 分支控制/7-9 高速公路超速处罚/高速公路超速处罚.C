//httpspintia.cnproblem-sets1103503795084578816problems1103503863363653635

#include <stdio.h>

int main(){
	double s, l;
	
	scanf("%lf %lf", &s, &l);
	
	if(s<l*1.1 && s!=110) printf("OK");
	else if(s<l*1.5 && s!=150)  printf("Exceed %.0lf%%. Ticket 200", (s/l-1)*100);
		else printf("Exceed %.0lf%%. License Revoked", (s/l-1)*100);
} 
