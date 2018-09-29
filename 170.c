#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num[4], i=0, cont=0, qtdP=0, m=1, j;
    
    while(i<=3){
        scanf("%d", &num[i]);
        for(j=1; j<=num[i]; j++){
        if(num[i]%j==0){
            cont++;
        }
        }
        if(cont==2){
            qtdP++;
        }
        m = m * num[i];
        i++;
        cont=0;
    }
    
    if(qtdP==4){
        printf("%d", m);
    } else {
        printf("SEM PRODUTO");
    }
	return 0;
}