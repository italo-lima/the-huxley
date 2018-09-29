#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, i, cont=0;
    
    scanf("%d", &num);
    
    for(i=1; i<=num; i++){
        if(num%i==0){
            if(i%3==0){
                cont++;
            }
        }
    }
    if(cont>0){
    printf("%d", cont);
    } else {
        printf("O numero nao possui divisores multiplos de 3!");
    }
	return 0;
}