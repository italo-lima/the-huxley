#include <stdio.h>

int main(){

    int i, valor,cont, aux=0;
    for (i=1; i<=5; i++){
        scanf("%d", &valor);
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
