#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char sexo;
    
    scanf("%c", &sexo);
    
    if((sexo=='M') || (sexo=='m')){
        printf("Masculino");
    } else if((sexo=='F') || (sexo=='f')){
        printf("Feminino");
    } else {
        printf("Sexo nao definido");
    }
    return 0;
}