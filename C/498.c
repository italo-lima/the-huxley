#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[7], total, soma=0, i, leu, maior=0;
    
    scanf("%d\n", &total);
    scanf("%d\n", &num[0]);
    maior = num[0];
    
    for(i=1; i<7; i++){
        scanf("%d", &num[i]);
        leu = num[i] - num[i-1];
        soma = soma + leu;
        if(leu>maior){
            maior = leu;
        }
    }
    printf("%d\n", soma + num[0]);
    printf("%d", maior);
	return 0;
}