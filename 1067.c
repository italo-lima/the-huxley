#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char carac[10],
        vogais[10] = {'a','A','E','e','I','i','O','o','U','u','\0'};
    int tamanho,i, ehVogal=0;

    gets(carac);
    tamanho = strlen(carac);

    if(tamanho > 1){
        printf("1 caractere, por favor!");
    } else if(tamanho == 1){
        for (i=0; i<strlen(vogais); i++){
            if(carac[0] == vogais[i]){
                ehVogal = 1;
            }
        }
        if(ehVogal == 1){
            printf("Eh vogal");
        } else {
         printf("Nao eh vogal");
        }
        }
	return 0;
}