#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ano, periodo, i;
    
    scanf("%d", &ano);
    scanf("%d", &periodo);
    
    for(i=0; i<3; i++){
        ano = ano + periodo;
        printf("%d ", ano);
    }
	return 0;
}