#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int h, m;
    float totalH, totalM;
    
    scanf("%d%d", &m, &h);
    
    totalM = m  * 10;
    totalH = h * 8.50;
    float media = (totalM + totalH) / (m+h);
    printf("%.2f\n%.2f", totalM + totalH, media);
	return 0;
}