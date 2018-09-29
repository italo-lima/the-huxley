#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int tempo, vel, distancia;
    float qtd;
    
    scanf("%d%d", &tempo, &vel);
    
    
    distancia = tempo * vel;
    qtd = (float)distancia / 12;
    
    printf("%.3f", qtd);
    
    
	return 0;
}