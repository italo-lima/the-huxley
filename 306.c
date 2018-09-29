#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int dias, intAno, restAno, intMes, restDias;
    
    scanf("%d", &dias);
    
    intAno = dias / 365;
    restAno = dias % 365;
    
    intMes = restAno / 30;
    restDias = restAno % 30;
    
    printf("%d ano(s)\n", intAno);
    printf("%d mes(es)\n", intMes);
    printf("%d dia(s)", restDias);
	return 0;
}