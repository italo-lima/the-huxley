#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int linha1[10];
    int linha2[10];
    int soma[10];
    int i;
    
    for(i=0; i<10; i++){
        scanf("%d", &linha1[i]);
    }
    
    for(i=0; i<10; i++){
        scanf("%d", &linha2[i]);
    }
    
    for(i=0; i<10; i++){
        soma[i] = linha1[i] + linha2[i];
        printf("%d ", soma[i]);
    }
	return 0;
}