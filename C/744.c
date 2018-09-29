#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int i, x; 
  int div = 0;

    scanf("%d", &x);
  
  for (i = 1; i <= x; i++) {
    if (x % i == 0) { 
     div++;
    }
  }
    
  if (div == 2)
    printf("SIM\n");
  else
    printf("NAO\n");
	return 0;
}