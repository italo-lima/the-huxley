#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int e,i;
    
    scanf("%d\n%i", &e, &i);
    
    if((e==0) && (i==0)){
        printf("0");
    } else if((e==1) || (i==1)){
        printf("1");
    }
	return 0;
}