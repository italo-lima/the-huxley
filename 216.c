#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int kmTOTAL, kmPISTA, i, cont=0;
    
    scanf("%d%d", &kmTOTAL, &kmPISTA);
    
    for(i=0; i<=kmTOTAL; i=i+kmPISTA){
       cont++;
    }
    cont = cont-1;

    int valor =  kmTOTAL - (cont * kmPISTA);
    printf("%d\n", valor);
	return 0;
}