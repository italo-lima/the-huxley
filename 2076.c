#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, i, j, cont=0, maior=0, p, aux;
    
    scanf("%d %d", &a, &b);
    
    if(a>b){
        aux = a;
        a = b;
        b = aux;
    }
    
    for(i=a; i<=b; i++){
        for(j=1; j<=b; j++){
            if(i%j==0){
                cont++;
            }
            if(cont>maior){
                maior = cont;
                p = i;
            }
        }
        cont = 0;
    }
    printf("%d %d", p, maior);
	return 0;
}