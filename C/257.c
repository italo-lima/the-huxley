#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[] = {'1','2','3','4','5','6','7','8','9','0'};
    int i,j, cont=0;
    char nome[200];

        scanf("%s", nome);
    
    for(i=0; i<strlen(nome); i++){
    for(j=0; j<10; j++){
        if(nome[i]==num[j]){
            cont++;
        }
    }    
    }
    printf("%d", cont);
	return 0;
}