#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char nome[10], invertido[10];
    int i;
    
    scanf("%s", nome);
    int n = strlen(nome) -1;
    int x = n;
    
    for(i=0; i<strlen(nome); i++){
        invertido[n] = nome[i];
        invertido[n] = tolower(invertido[n]);
        n--;
    }
    invertido[i]='\0';
    invertido[0] = toupper(invertido[0]);
    invertido[x] = toupper(invertido[x]);
    printf("%s", invertido);
	return 0;
}