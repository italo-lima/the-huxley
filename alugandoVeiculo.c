#include <stdio.h>

int main(){
int dias, limite;
float diaria=90.00, km, valor, VF;

scanf("%i", &dias);
scanf("%f", &km);
limite = dias * 100;

if((dias == 1) && (km <=limite)){
    valor = dias * diaria;
    printf("%.2f", valor);
} else if((dias == 1)&&(km>limite)){
    km = km - limite;
    VF = km * 12;
    printf("%.2f", (dias * diaria) + VF);
} else if((dias > 1) && (km < limite)){
    valor = dias * diaria;
    printf("%.2f", valor);
}
else if((dias > 1) && (km > limite)){
  km = km - limite;
  VF = km * 12;
  printf("%.2f", (dias * diaria) + VF);
}

return 0;
}
