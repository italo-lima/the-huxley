#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char codigo[10];
    int i;
    
    for(i=0; i<10; i++){
        scanf("%s", &codigo[i]);
    }
       
        if((codigo[6]=='b') || (codigo[6]=='B')){
            printf("Bulbassauro");
        } else if((codigo[6]=='c') || (codigo[6]=='C')){
            printf("Charmander");
        } else if((codigo[6]=='s') || (codigo[6]=='S')){
            printf("Squirtle");
        } else {
            printf("Codigo Invalido");
        }
	return 0;
}