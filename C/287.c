#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int lG, cG, hG, lC, cC, hC;
    
    scanf("%d\n%d\n%d\n", &lG, &cG, &hG);
    scanf("%d\n%d\n%d\n", &lC, &cC, &hC);
    
    if((lG>=lC) && (cG>=cC) && (hG>=hC)){
        printf("SIM");
    } else {
        printf("NAO");
    }
	return 0;
}