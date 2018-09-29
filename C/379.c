#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, cont=0;
    float km[7];
    
    for(i=0; i<7; i++){
        scanf("%f", &km[i]);
        if(km[i]>=8){
            cont++;
        }
    }
    
    if(cont>=5){
        printf("Desempenho otimo");
    } else if((cont==3) || (cont==4)){
        printf("Desempenho razoavel");
    } else if(cont<=3){
        printf("Desempenho ruim");
    }
	return 0;
}