#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float notas[6];
    int i;
    
    for(i=0; i<6; i++){
        scanf("%f", &notas[i]);
    }
if((notas[0]<notas[1]) && (notas[1]<notas[2]) && (notas[2]<notas[3]) && (notas[3]<notas[4]) && (notas[4]<notas[5])){
                        printf("Ganha brinquedo");
    } else {
        printf("Sem brinquedo");
    }
	return 0;
}