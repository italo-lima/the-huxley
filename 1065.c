#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    
    scanf("%d", &x);
    
    if(x%5 == 0){
        printf("Eh multiplo de 5");
    } else {
        printf("Nao eh multiplo de 5");
    }
    
	return 0;
}