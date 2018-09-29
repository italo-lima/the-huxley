#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    
    scanf("%f\n%f\n%f", &a, &b, &c);
    
    if((a<=b && b<=c) || (a<=b && b>=c)){
        printf("Primeiro produto");
    } else if((b<=c && a<=c) || (b<=c && a>=c)) {
        printf("Segundo produto");
    } else {
        printf("Terceiro produto");
    }
	return 0;
}