#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int valores[5];
    int i;
    
    for(i=0; i<5; i++){
        scanf("%d", &valores[i]);
    }
    if(valores[0]>5 && valores[2]>5 && valores[4]>5){
        printf("Knight");
    } else if(valores[0]<5 && valores[1]>5 && valores[3]>5 && valores[4]<5){
        printf("Mage");
    } else if(valores[0]>5 && valores[1]>5 && valores[2]>5 && valores[3]>5 && valores[4]<5){
        printf("Paladin");
    } else {
        printf("Orc");
    }
	return 0;
}