#include <stdio.h>
#include <stdlib.h>

int main() {
    long int num;
    
    scanf("%ld", &num);
    
    if(num==0){
        printf("NULO");
    } else if(num>0){
        if(num%2==0){
            printf("POSITIVO PAR");
        } else {
            printf("POSITIVO IMPAR");
        }
    } else {
        if(num%2==0){
            printf("NEGATIVO PAR");
        } else {
            printf("NEGATIVO IMPAR");
        }
    }
	return 0;
}