#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    int i;
    char palavra[100], carac, troca;
    
    scanf("%s", palavra);
    getchar();
    
    scanf("%c", &carac);
    getchar();
    
    scanf("%c", &troca);
    getchar();
    
    for(i=0; i<strlen(palavra); i++){
        if(palavra[i] == carac){
            palavra[i]=troca;
        }
    }
    printf("%s", palavra);
	return 0;
}