#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, n4;
    
    scanf("%f\n%f\n%f\n%f", &n1, &n2, &n3, &n4);
    float media = (n1 + n2 + n3 + n4) / 4;
    printf("Informe a primeira nota do aluno:\n");
 	printf("Informe a segunda nota do aluno:\n");
	printf("Informe a terceira nota do aluno:\n");
	printf("Informe a quarta nota do aluno:\n");
    printf("Media: %.3f", media);
	return 0;
}