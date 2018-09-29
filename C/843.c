#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char texto[500];
    int i, cont=0;

    fgets(texto, 50, stdin);

    for(i=0; texto[i] != '\0'; i++){

        if((texto[i]==' ') && (texto[i+1] !=' ')) {

    cont++;
        
}
    }printf(" %d",cont+1);


	return 0;
}