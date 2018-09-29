#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char palavra[50],letra;
    int i, cont=0;
    
    scanf("%s", palavra);
    getchar();
    scanf("%c", &letra);
    
    for(i=0; i<strlen(palavra); i++){
        if(palavra[i]==letra){
            printf("%d", i);
            cont++;
            break;
        }
    }
    if(cont==0)
    printf("-1");
	return 0;
}