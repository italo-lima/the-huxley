#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b, i, j, soma=0;

    scanf("%d\n%d", &a, &b);

    if(a>b){
        for(i=b; i<=a; i++){
            if(i>0){
                soma = soma + i;
            }
        }
    } else {
        for(j=a; j<=b; j++){
            if(j>0){
                soma = soma + j;
            }
        }
    }
    printf("%d", soma);
	return 0;
}
