#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double raio, graus;
    
    scanf("%lf %lf", &raio, &graus);
    
    double compArco = (graus * 3.14 * raio) / 180;
    double setor = graus * 3.14 * (pow(raio,2))/ 360;
    
    printf("%.2lf\n%.2lf", compArco, setor);

	return 0;
}