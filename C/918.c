#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int canal;
    
    scanf("%d", &canal);
    switch(canal){
        case 2: printf("Digite um numero de um canal de tv:\nSBT");
        break;
        case 4: printf("Digite um numero de um canal de tv:\nBAND");
        break;
        case 6: printf("Digite um numero de um canal de tv:\nREDETV!");
        break;
        case 9: printf("Digite um numero de um canal de tv:\nRECORD");
        break;
        case 13: printf("Digite um numero de um canal de tv:\nGLOBO");
        break;
        default: printf("Digite um numero de um canal de tv:\nCanal Invalido");
        
    }
	return 0;
}