#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char nome[500];
    
    scanf("%[^\n]s", nome);
    int i = strlen(nome);
    printf("%d", i);
	return 0;
}