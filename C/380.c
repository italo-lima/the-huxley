#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char nome[8];
    int i, cont=0;
    
    for(i=0; i<7; i++){
        scanf("%s", nome);
        
        if(strcasecmp(nome,"boliche")==0){
            cont++;
        }
    }
    
    if(cont>=4){
        printf("BOLICHE");
    } else {
        printf("CINEMA");
    }
	return 0;
}