#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j, aux, num[4];
    
    for(i=0; i<4; i++){
        scanf("%d", &num[i]);
    }
    
    for(i=0; i<4; i++){
        for(j=i+1; j<4; j++){
            if(num[i]<num[j]){
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
    for(i=0; i<4; i++){
        printf("%d ", num[i]);
    }
	return 0;
}