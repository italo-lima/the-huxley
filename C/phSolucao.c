#include <stdio.h>

int main(){

float ph;

printf("Valor Ph\n");
scanf("%f", &ph);

if((ph>=0) && (ph<=14)){
    if(ph==7){
        printf("Neutro");
    } else if(ph < 7){
        printf("acido");
    } else {
    printf("B�sico");
    }
}

return 0;
}
