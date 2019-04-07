#include <stdio.h>
#include <iostream>

int main()
{
  int a,N;
  scanf("%d",&N);
  a=1;
  do{
    printf("%d\n",a++);
  }while (a<=N);
  return 0;
}
