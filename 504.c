#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fat(int v){
    if(v==0 || v==1){
        return 1;
    } else {
        return fat(v-1) * v;
    }
}

int main() {
    int i, n, resultado[6], cont=0, soma=0;
    
    for(i=0; i<5; i++){
    scanf("%d", &n);
        if(n%3==0){
        cont++;
        resultado[cont] = fat(n);
    }
    }
    while(cont>0){
        soma = soma +resultado[cont];
        cont--;
    }
        printf("%d", soma);
	return 0;
}