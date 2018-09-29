#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float x, total=0, media=0;
    int cont=0, i=1;
    
    while(i>0){
        scanf("%f", &x);
        total = total + x;
        cont++;
        if(cont==3){
            break;
        }
    }
    
    media = total/(float)cont;
    printf("%.2e", media);
    
	return 0;
}