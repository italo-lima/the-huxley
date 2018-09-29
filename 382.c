#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int valores[10];
    int i, soma=0, cont=0;

    for(i=0; i<10; i++){
        scanf("%d", &valores[i]);

        if(valores[i]==0){
            break;
        } else {
            soma +=valores[i];
            cont++;
        }
    }
    float media = soma / cont;

    if(media<=110){
        printf("Glicose Normal");
    } else if(media>=200){
        printf("Glicose Muito Alta");
    } else {
        printf("Glicose Alterada");
    }
	return 0;
}
