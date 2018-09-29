#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    char cod[10];

    for(i=0; i<10; i++){
        scanf("%c", &cod[i]);
    }
    if((cod[6]=='b') || (cod[6]=='B')){
       printf("Bulbassauro");
       } else if((cod[6]=='c') || (cod[6]=='C')){
       printf("Charmander");
       } else if((cod[6]=='s') || (cod[6]=='S')){
        printf("Squirtle");
       } else {
       printf("Codigo Invalido");
       }
	return 0;
}