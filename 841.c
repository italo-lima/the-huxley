#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int i;
    float notas[3], mediaArt;
    int cont=0;

    for(i=0; i<3; i++){
        scanf("%f", &notas[i]);
    }
mediaArt = (notas[0] + notas[1] + notas[2]) / 3;

    for(i=0; i<3; i++){
        if(notas[i]>mediaArt){
            cont++;
        }
    }
    printf("%i", cont);

	return 0;
}