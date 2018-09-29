#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num, cont1=0, cont2=0, cont3=0, cont4=0;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    
    while(num>=0){
        if(num<=25){
            cont1++;
        } else if(num<=50){
            cont2++;
        } else if(num<=75){
            cont3++;
        } else if(num<=100){
            cont4++;
        }
        printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    }
    printf("Quantidade de numeros no intervalo 1: %d\n", cont1);
    printf("Quantidade de numeros no intervalo 2: %d\n", cont2);
    printf("Quantidade de numeros no intervalo 3: %d\n", cont3);
    printf("Quantidade de numeros no intervalo 4: %d\n", cont4);
	return 0;
}