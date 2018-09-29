#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cont=0, h, idade;
    
    scanf("%d %d", &h, &idade);
    
    if(idade>=12 && h>=150)
    cont++;
    if(idade>=14 && h>=140)
    cont++;
    if(idade>=16 || h>=170)
    cont++;
    printf("%d", cont);
	return 0;
}