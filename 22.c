#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, valor, tab = 1;
    
    scanf("%d", &valor);
    
    for(i=0; i<9; i++){
        printf("%d X %d = %d\n", valor, (tab+i), (valor * (tab+i)));
    }
	return 0;
}