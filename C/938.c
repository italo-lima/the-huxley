#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i, cont, aux=0;
    float valor;
    for (i=1; i<=5; i++){
        scanf("%f", &valor);
        cont++;
        if(valor < 0){
            aux++;
        }
    }

    for(i=1; i<=5; i++){
        printf("Digite um valor:\n");
    }
    printf("Foram digitados %d numeros negativos", aux);

return 0;
}