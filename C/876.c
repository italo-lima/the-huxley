#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int anoNasc, anoAtual;
    
    scanf("%i", &anoNasc);
    scanf("%i", &anoAtual);
    printf("%i", (anoAtual - anoNasc));
	return 0;
}