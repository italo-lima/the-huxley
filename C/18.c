#include <stdio.h>
#include <stdlib.h>

int main(void){
  int a, b, c, menor1, menor2;
  scanf("%d %d %d", &a, &b, &c);
  menor1 = (a < b && a < c)? a : b;
  menor2 = (b < c && b < a)? b : c;
  menor1 = (menor1 < menor2)? menor1 : menor2;
  printf("%d", menor1);
	return 0;
}