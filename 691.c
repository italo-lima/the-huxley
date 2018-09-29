#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a,b,aux;
    
    scanf("%d\n",&a);
    scanf("%d",&b);
    
    if(a > b){
        aux = a;           
        a = b;             
        b = aux;          
    }
    printf("%d %d", a,b);
    
	return 0;
}