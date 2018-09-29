#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num; 
    
    scanf("%d", &num);
    
    switch(num){
        case 1:	printf("Bulbassauro"); break;
        case 2: printf("Ivyssauro"); break;
        case 3:	printf("Venossauro"); break;
        case 4:	printf("Charmander"); break;
        case 5:	printf("Charmeleon"); break;
        case 6:	printf("Charizard"); break;
        case 7:	printf("Squirtle"); break;
        case 8:	printf("Wartortle"); break;
        case 9:	printf("Blastoise"); break;
        case 10: printf("Caterpie"); break;
        case 11: printf("Metapod"); break;
        case 12: printf("Butterfree"); break;
        default: printf("Pokemon invalido no momento"); break;

    }
	return 0;
}