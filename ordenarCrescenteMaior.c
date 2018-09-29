#include <stdio.h>

int main(){

int a,b,c,aux;

printf("Digite o primeiro valor");
scanf("%d", &a);
printf("Digite o segundo valor");
scanf("%d", &b);
printf("Digite o terceiro valor");
scanf("%d", &c);

if(a > b){
    aux = a;
    a = b;
    b = aux;
}

if(a > c){
    aux = a;
    a = c;
    c = aux;
}

if(b > c){
    aux = b;
    b = c;
    c = aux;
}

printf("Números ordenados: %d\n%s\n%d\n", a,b,c);
}
