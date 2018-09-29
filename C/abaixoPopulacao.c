#include <stdio.h>

int main(){
int quantCar, i, cont;
float valor=12.89, multa;

for(i=0; i<quantCar; i++){
    scanf("%i", &quantCar);
    if(quantCar > 2){
        //multa = (quantCar - 2) * valor;
    cont++;
    } else if(quantCar == 999){
    break;
    }
    }
    printf("%.2f\n%i", multa, cont);

     return 0;
}
