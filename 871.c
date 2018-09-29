#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l,c, i, j, somaDP=0, somaDS=0, p=0, n=0;
    
    scanf("%d %d", &l, &c);
    
    int matriz[l][c];
    
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j]<=0){
                n++;
            } else {
                p++;
            }
        }
    }
    
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            if(i==j){
                somaDP = somaDP + matriz[i][j];
            }
            if(i+j==l-1){
                somaDS = somaDS + matriz[i][j];
            }
        }
    }
    printf("Matriz formada:\n");
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            if(j==c-1){
                printf("%d\n", matriz[i][j]);
            } else {
            printf("%d ", matriz[i][j]);
        }
        }
    }
    if(c==l){
        printf("A diagonal principal e secundaria tem valor(es) %d e %d respectivamente.\n", somaDP, somaDS);
    } else {
        printf("A diagonal principal e secundaria nao pode ser obtida.\n");
    }
    printf("A matriz possui %d numero(s) menor(es) que zero.\n", n);
    printf("A matriz possui %d numero(s) maior(es) que zero.", p);
	return 0;
}