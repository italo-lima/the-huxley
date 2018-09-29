#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num=1, maior=0;
    
    while(num>0){
        scanf("%d", &num);
        if(num>maior){
            maior = num;
        }
    }
    printf("%d", maior);
	return 0;
}