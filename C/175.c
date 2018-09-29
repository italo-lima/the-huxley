#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int kmTOTAL, kmPEDAGIO, kmVALOR, vPEDAGIO, soma=0, i, cont=0;
    
    scanf("%d%d", &kmTOTAL, &kmPEDAGIO);
    scanf("%d%d", &kmVALOR, &vPEDAGIO);
    
    for(i=0; i<=kmTOTAL; i=i + kmPEDAGIO){
        cont++;
    }
    
    soma = soma + ((cont - 1) * vPEDAGIO);
    
    int valor = kmTOTAL * kmVALOR;
    
    printf("%d", soma + valor);
	return 0;
}