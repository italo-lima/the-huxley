#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, j, temp;
    int numeros[5];

         for (i = 0; i < 5; i++) {
         scanf("%d", &numeros[i]);
    }

    for (j = 0; j < 5; j++) {
         for (i = 0; i < 5; i++) {
    if (numeros[i] > numeros[i+1]) {
     temp = numeros[i];
     numeros[i] = numeros[i+1];
     numeros[i+1] = temp;
        }
    }
    printf("%d - %d km/h\n", j+1, temp);
    }
	return 0;
}