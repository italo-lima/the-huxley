#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char nome[100];
    int i;
    
    scanf("%[^\n]s", nome);
    
    for(i=0; i<strlen(nome); i++){
        nome[i] = toupper(nome[i]);
    }
    
    printf("%s", nome);
	return 0;
}