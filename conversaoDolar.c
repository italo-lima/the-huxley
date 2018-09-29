#include <stdio.h>

void arredondamento(float a){
    float aux;
    int i;

    aux = a * 100;
    aux = round(aux);
    i = aux;
    if(i % 10 == 0){
        printf("%.1f\n", a);
    } else {
        printf("%.2f\n", a);
    } }

int main(){

float dolar;

scanf("%f", &dolar);

arredondamento(3.55*dolar);

return 0;
}
