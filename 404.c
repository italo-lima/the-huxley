#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ClassificaAluno (float media, int faltas){
    if(faltas>10){
        printf("REPROVADO POR FALTAS");
    } else if((faltas <=10) && (media<7)){
        printf("REPROVADO");
    } else if((faltas<=10) && (media<9.5)){
        printf("APROVADO");
    } else if((faltas<=10) && (media>=9.5)){
        printf("APROVADO COM LOUVOR");
    }
}

int main() {
    float media;
    int faltas;
    
    scanf("%f", &media);
    scanf("%d", &faltas);
    ClassificaAluno(media, faltas);
	return 0;
}