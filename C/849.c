#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.1416

double VolumeEsfera(double raio){
    
    double volume = 4 * PI * (pow(raio,3)) /3;
    
    return volume;
}


int main() {
    int i;
    double raio[3], volume;
    
    for(i=0; i<3; i++){
    scanf("%lf", &raio[i]);
    volume = VolumeEsfera(raio[i]);
    printf("%.2lf\n", volume);
    }
	return 0;
}