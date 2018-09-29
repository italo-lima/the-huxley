#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char nome[255], str[255];
    int i;
    
        scanf("%s", nome);
        int n = strlen(nome) -1;
        
        for(i=0; i<strlen(nome); i++){
            str[n] = nome[i];
            n--;
        }
        
        str[i] = '\0';
        printf("%s", str);
        
	return 0;
}