#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    switch(num){
        case 1: printf("Bulbassauro"); break;
        case 2: printf("Charmander"); break;
        case 3: printf("Squirtle"); break;
    }
	return 0;
}