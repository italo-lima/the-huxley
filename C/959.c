#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, cont=1;
    int qtd,final,inc;
    
    scanf("%d %d %d", &qtd, &final, &inc);
    for(i=1; i<=final; i= i+inc){
        if(cont%qtd==0){
            printf("%d", i);
            printf("\n");
            cont++;
        } else {
        printf("%d ", i);
        cont++;
        }
    }
	return 0;
}