#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tempo[5], i, media=0, soma=0;
    
    for(i=0; i<5; i++){
        scanf("%d", &tempo[i]);
        soma = soma + tempo[i];
    }
    media = soma / 5;
    int tt = media * 100;
    
    printf("%d\n", media);
    printf("%d\n", tt / 3600);
    printf("%d\n", (tt % 3600) /60);
    printf("%d\n", (tt % 3600) %60);
	return 0;
}