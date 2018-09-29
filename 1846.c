#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char nome[10];
    int i, j;
    
    scanf("%s", nome);
    
    for(i=0; i<strlen(nome); i++){
        for(j=0; j<=i; j++){
            nome[j] = toupper(nome[j]);
            printf("%c", nome[j]);
        }
        printf("\n");
    }
	return 0;
}