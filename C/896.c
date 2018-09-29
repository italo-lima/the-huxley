#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0, num;
    
    while(i>=0){
        printf("Informe uma nota entre 0 e 10:\n");
        scanf("%d", &num);
        if((num>=0) && (num<=10)){
            break;
        } else {
            printf("Valor invalido\n");
            continue;
        }
    }
	return 0;
}