#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int fat, num;
    
    scanf("%d", &num);
    
    if(num<0){
        printf("Digite um numero inteiro:\nFatorial: 1");
    } else {
        for(fat=1; num>0; num=num-1){
            fat = fat * num;
        }
        printf("Digite um numero inteiro:\n");
        printf("Fatorial: %d", fat);
    }
	return 0;
}