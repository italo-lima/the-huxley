#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float n1, n2,n3;
    
    scanf("%f\n%f\n%f", &n1, &n2, &n3);
    float media =  ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
    printf("MEDIA = %.1f", media);
	return 0;
}