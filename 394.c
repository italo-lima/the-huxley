#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i, num, j=1, soma=0, maior=0, numM;
    
    for(i=0; i<5; i++){
        scanf("%d", &num);
        while(j<=num){
        if(num%j==0){
            soma = soma + j;
        }
        j++;
        }
        if(soma>maior){
            maior = soma;
            numM = num;
        }
        j=1;
        soma=0;
    }
    printf("%d", numM);
	return 0;
}