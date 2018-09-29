#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arred(float soma){
    int x = soma * 100.0;
    if(x%10==0){
        return printf("Media do aluno: %.1f\n", soma);
    } else {
        return printf("Media do aluno: %.2f\n", soma);
    }
}

int main() {
    int mat, i=0;
    float nota1, nota2, nota3;
    
    while(i>=0){
    printf("Informe o codigo do aluno: (0 para encerrar o programa)\n");
    scanf("%d", &mat);
    if(mat==0){
        break;
    } else {
    printf("Informe a primeira nota do aluno:\nInforme a segunda nota do aluno:\nInforme a terceira nota do aluno:\n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    float media = (nota1+ nota2+ nota3) /3;
    arred(media);
    }
    }
	return 0;
}