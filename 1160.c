#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
     int x1, z1;
  scanf("%d %d", &x1, &z1);
  
  printf("Distancia para Hogsmeade: %.2lf\n", sqrt( ((34-x1)*(34-x1)) + ((220-z1)*(220-z1)) ));
  
  printf("Distancia para Kakariko: %.2lf\n", sqrt( ((0-x1)*(0-x1)) + ((0-z1)*(0-z1)) ));
  
  printf("Distancia para Solitude: %.2lf\n", sqrt( ((140-x1)*(140-x1)) + ((456-z1)*(456-z1)) ));
  
	return 0;
}