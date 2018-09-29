#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l1,l2,l3;
    
    scanf("%d\n%d\n%d\n", &l1, &l2, &l3);
    
    if((l1==l2) && (l1==l3) && (l2==l3)){
        printf("equilatero");
    } else if((l1==l2) || (l1==l3) || (l2==l3)){
        printf("isosceles");
    } else if((l1!=l2) && (l1!=l3) && (l2!=l3)){
        printf("escaleno");
    }
	return 0;
}