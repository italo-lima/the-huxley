#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int inicio, fim, i;
    
    scanf("%d\n", &inicio);
    scanf("%d\n", &fim);
    
    for(i=inicio; i<=fim; i++){
        if(i%5==0){
            if(i+5>fim){
                printf("%d", i);
            } else {
        printf("%d", i);
        printf("|");
            }
        }
    }
	return 0;
}