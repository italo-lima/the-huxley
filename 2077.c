#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, i, cont=0;
    
    scanf("%d", &num);
    
    for(i=1; i<num; i++){
        if(i * (i+1) * (i+2) == num){
            printf("True");
            cont++;
            break;
        }
        }
        if(cont==0){
            printf("False");
        }
	return 0;
}