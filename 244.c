#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    char palavra[50];
    char carac;
    int i, cont=0;
    
    gets(palavra);
    scanf("%c", &carac);
    
    for(i=0; palavra[i]!='\0'; i++){
        if(palavra[i] == carac){
            cont++;
        }
    }
    
    printf("%d", cont);
    
	return 0;
}