//https://pintia.cn/problem-sets/1103525610276245504/problems/1103525745123119106

 #include <stdio.h>
 
 int main (){
 	int a, b, c, f, s, t;
 	
 	scanf("%d %d %d", &a, &b, &c);
 	
 	if(s=c, b>c) s=b;
 	f= (a>b ? (a>c ? a: (s=a,c)) : (b>c ? b: (s=b,c)));
 	if (a>b)
 		if(b>c) t=c;
 		else t=b;
 	else
 		if(a>c) t=c;
 		else t=a;
 		
 	printf("%d->%d->%d", t, s, f);
 }
