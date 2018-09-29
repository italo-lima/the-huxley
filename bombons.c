#include <stdio.h>

int main(){

int quantA, quantC, quantP, precoA, precoC, precoP, valor1, valor2, valor3;

scanf("%i\n", &quantA);
scanf("%i\n", &quantC);
scanf("%i\n", &quantP);
scanf("%i\n", &precoA);
scanf("%i\n", &precoC);
scanf("%i\n", &precoP);

valor1 = (quantA * precoA);
valor2 = (quantC * precoC);
valor3 = (quantP * precoP);
printf("Valor: %.2f", (valor1+valor2+valor3));

return 0;
}
