#include <stdio.h>
#include <iostream>

int main()
{
  int a,N;
  scanf("%d",&N);
  a=1;
  do{
    printf("%d",a++);
  }while (a<N);
  return 0;
}
