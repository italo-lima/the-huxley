#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   char nomeRua[50], bairro[50], estado[50], cidade[50];
   int num, cep;

    scanf("%[^\n]s", nomeRua);
    getchar();
    scanf("%d", &num);
    getchar();
    scanf("%[^\n]s", bairro);
    getchar();
    scanf("%[^\n]s", cidade);
    getchar();
    scanf("%[^\n]s", estado);
    getchar();
    scanf("%d", &cep);
    
    printf("%s, %d.\n", nomeRua, num);
    printf("Bairro: %s. Cep: %d\n", bairro, cep);
    printf("%s/%s", cidade, estado);
	return 0;
}