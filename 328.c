#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    
    scanf("%d%d", &a,&b);
    
    if(a==0 && b==0){
        printf("origem");
    } else if(a!=0 && b==0){
        printf("eixo x");
    } else if(a==0 && b!=0){
        printf("eixo y");
    } else if(a>0 && b>0){
        printf("primeiro");
    } else if(a<0 && b>0){
        printf("segundo");
    } else if(a<0 && b<0){
        printf("terceiro");
    } else if(a>0 && b<0){
        printf("quarto");
    }
	return 0;
}