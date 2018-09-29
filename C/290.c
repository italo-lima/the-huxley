#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cp1, np1, cp2, np2;
	double vp1, vp2, total = 0;
	scanf("%d %d %lf\n%d %d %lf", &cp1, &np1, &vp1, &cp2, &np2, &vp2);
	total = (np1*vp1)+(np2*vp2);
	printf("VALOR A PAGAR: R$ %.2lf", total);
	return 0;
}