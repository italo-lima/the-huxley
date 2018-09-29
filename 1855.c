#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int idade[4], maior=0, menor=999, i;
    
    for(i=0; i<4; i++){
        scanf("%d", &idade[i]);
        
        if(idade[i]>maior)
        maior = idade[i];
        if(idade[i]<menor)
        menor = idade[i];
    }
    if(idade[0]==0 && idade[1]==0 && idade[2]==0 && idade[3]==0){
        printf("0");
    } else {
    printf("%d", maior - menor);
    }
	return 0;
}