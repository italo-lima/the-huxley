#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int max, a,b, r;
    char opc;
    
    scanf("%d", &max);
    scanf("%d", &a);
    scanf(" %c", &opc);
    scanf("%d", &b);
    
    if(opc=='+'){
        r = a + b;
    } else if(opc=='*'){
        r = a * b;
    }
    
    if(r>max){
        printf("OVERFLOW");
    } else {
        printf("OK");
    }
	return 0;
}