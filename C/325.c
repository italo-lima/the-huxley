#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, quad, cub, i;
    
     scanf("%d", &x);
     
    for(i=1; i<=x; i++){
        quad = i * i;
        cub = quad * i;
        printf("%d %d %d\n", i, quad, cub);
    }
    
	return 0;
}