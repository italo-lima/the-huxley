#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double na, nb;
    
    scanf("%lf\n%lf", &na, &nb);
    double media = ((na * 3.5) + (nb * 7.5)) / 11;
    printf("MEDIA = %.5lf", media);
	return 0;
}