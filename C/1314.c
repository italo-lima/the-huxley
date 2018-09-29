#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l1, l2, l3;
    
    scanf("%d\n%d\n%d", &l1, &l2, &l3);
    
    if(l1+l2>l3 && l2+l3>l1 && l1+l3>l2){
        if(l1==l2 && l2==l3){
            printf("Equilatero");
        } else if(l1==l2 || l2==l3 || l1==l3){
            printf(" Isosceles");
        } else if(l1!=l2 && l2!=l3 && l1!=l3){
            printf("Escaleno");
        }
    } else {
        printf("Nao eh triangulo");
    }
	return 0;
}