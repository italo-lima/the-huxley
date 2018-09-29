#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    
    scanf("%f%f%f", &a, &b, &c);
   
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && a==c){
            printf("EQUILATERO");
        } else if(a==b || b==c || a==c){
            printf("ISOSCELES");
        } else {
            printf("ESCALENO");
        }
    } else {
        printf("-");
    }
	return 0;
}