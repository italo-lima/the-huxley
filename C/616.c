#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int respostas[5];
    int tipo, i, cont=0;
    
    scanf("%d", &tipo);
    
    for(i=0; i<5; i++){
        scanf("%d", &respostas[i]);
        if(respostas[i] == tipo){
            cont++;
        }
    }
    printf("%d", cont);
	return 0;
}