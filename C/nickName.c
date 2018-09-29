#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tamanho1, tamanho2;
    char nome [20], sobrenome[20];
    
    gets(nome);
    gets(sobrenome);
    
    tamanho1 = strlen(nome);
    tamanho2 = strlen(sobrenome);
    
    if((tamanho1 >=3) && (tamanho1 <=16)){
        if((tamanho2 >=3) && (tamanho2<=16)){
            strcat(nome,sobrenome);
            printf("%s", nome);
        }
    }
    
	return 0;
}