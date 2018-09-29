#include <stdio.h>
#include <math.h>

int main(){

float tempoGasto, quantCasas;
int d;

scanf("%f", &tempoGasto);
scanf("%f", &quantCasas);

d = (int)(ceil)((tempoGasto * quantCasas)/108000);

printf("%d", d);

return 0;
}
