#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char palavra[20];
    char titulo1[] = "MURAL";
    char titulo2[] = "O CORETO";
    char titulo3[] = "MEU LAR";
    char titulo4[] = "SUA MESA";
    int ano, i;

    gets(palavra);
    scanf("%d", &ano);

    strupr(palavra);

if(strcmp(palavra,titulo1)==0){
    printf("%.2f", (float)(200 * ano));
} else if (strcmp(palavra, titulo2) == 0){
     printf("%.2f", (float)(235 * ano));
} else if (strcmp(palavra, titulo3) == 0){
     printf("%.2f", (float)(180 * ano));
} else if(strcmp(palavra, titulo4) == 0){
     printf("%.2f", (float)(230 * ano));
        }

	return 0;
}
