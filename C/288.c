#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    int valores[5];
    
    for(i=0; i<5; i++){
    scanf("%d", &valores[i]);
    }
    
if((valores[0]==1 || valores[1]==1) && (valores[2]==1 && valores[3]==1) && (valores[4]==1)){
                printf("AVALIADO");
            } else {
            printf("0");
    }
	return 0;
}