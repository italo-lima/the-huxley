#include <stdio.h>
void arredondamento(float a){
float aux;
int resto;

aux = a * 1000;
printf("%f\n", aux);
resto = ((int) aux) % 10;
if(resto > 5){
printf("%.2f", floor(aux));
} else {
printf("%.2f", ceil(aux));
}
}

int main(){
    int km, dias;
    float diaria=30.00, valorDiaria, valorTotal, valorFinal, valorDescontado;

    scanf("%i/n", &dias);
    scanf("%i", &km);

    valorDiaria = dias * diaria;
    valorTotal = valorDiaria + (km * 0.01);
    valorDescontado = valorTotal * 0.1;
    valorFinal = valorTotal - valorDescontado;

    printf("%.2f\n", valorFinal);
    arredondamento(valorFinal);

return 0;
}
