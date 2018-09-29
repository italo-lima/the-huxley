#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char nome[50], letra;
    int i;
    
    scanf("%s", nome);
    getchar();
    scanf("%c", &letra);
    
    for(i=0; i<strlen(nome); i++){
        if(nome[i]==letra){
            printf("%d\n", i);
        }
    }
                printf("-1");
	return 0;
}