#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a,b,c,aux;
    
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);
    
    if(a > b){
        aux = a;     
        a = b;       
        b = aux;    
    }
    
    if(a > c){
        aux = a;
        a = c; 
        c = aux;
    }
    
    if(b > c){
        aux = b;
        b = c;
        c = aux;
    }
    
    printf("%d\n%d\n%d\n", a,b,c);
	return 0;
}