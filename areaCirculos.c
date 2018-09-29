#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float pi = 3.14;
    float raio1, raio2;
    float area1, area2;

    scanf("%f\n", &raio1);
    scanf("%f", &raio2);

    area1 = pi * (raio1*raio1);
    area2 = pi * (raio2*raio2);

    if (area1 == area2){
        printf("Iguais");
    } else if(area1 > area2){
        printf("Primeiro circulo");
    } else {
        printf("Segundo circulo");
    }

	return 0;
}
