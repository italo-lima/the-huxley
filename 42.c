#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int idade;
    
    scanf("%d", &idade);
    
    (idade<=16)? printf("nao eleitor") : 
    ((idade>=18) && (idade<=65))? printf("eleitor obrigatorio") : printf("eleitor facultativo");
	return 0;
}