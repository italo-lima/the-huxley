#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float larg, comp, alt;
    
    scanf("%f\n%f\n%f", &larg, &comp, &alt);
    
    if((larg>45) || (comp>56) || (alt>25)){
        printf("PROIBIDA");
    } else {
        printf("PERMITIDA");
    }
	return 0;
}