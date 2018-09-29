#include<stdio.h>
#include<stdlib.h>

int main(){

float valor=0, cont, media, soma=0;


while(valor>=0){
    scanf("%f", &valor);
    if(valor>=0){
    soma = valor + soma;
    cont++;}
    else{
        break;
    }

}

media = soma/cont;

printf("%.2f\n",soma);
if(cont == 0){
printf("0.00");
}else{
printf("%.2f\n",media);
}

printf("\n\n");

getchar();
}