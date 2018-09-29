#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, num[10], maior=0, cont=0, soma=0, indice;
    
    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
        if(num[i]>maior){
            maior=num[i];
            indice = i;   
        }
    }
    for(i=0; i<10; i++){
        if(num[i]==maior){
            soma = soma +i;
            cont++;
        }
    }
    if(cont>1){
    printf("%d", soma);
    } else {
    printf("%d", indice);
    }
	return 0;
}