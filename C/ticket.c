#include <stdio.h>

int main(){

int quantDias, quantCasas,ticketDia = 10800;

scanf("%i", &quantDias);
scanf("%i", &quantCasas);

printf("%i", (quantDias * ticketDia) / quantCasas);


return 0;
}
