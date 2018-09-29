#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int opc1, opc2;
    
    scanf("%d\n%d", &opc1, &opc2);
    
    if((opc1==0) && (opc2==1)){
        printf("1");
    } else {
        printf("0");
    }
	return 0;
}