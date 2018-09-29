#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    
    scanf("%f\n%f", &num1, &num2);
    
    if(num1>num2){
        printf("%.2f", num1*2);
    } else {
        printf("%.2f", num2*2);
    }
	return 0;
}