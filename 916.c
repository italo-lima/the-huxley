#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num=0;
    
    while(num>=0){
        printf("Digite um numero (negativo para parar o programa):\n");
        scanf("%d", &num);
        if(num<=0){
        break;
        }
        printf("Numero: %d\n", num);
    }
	return 0;
}