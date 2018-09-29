#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int dias, limite;
float diaria=90.00, km, valor, VF;

scanf("%i", &dias);
scanf("%f", &km);
limite = dias * 100;

if(km > limite){
    km = km - limite;
    VF = km * 12;
    printf("%.2f", (dias * diaria) + VF);
} else {
  printf("%.2f", dias * diaria);
}

	return 0;
}