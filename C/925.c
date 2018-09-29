#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    
    scanf("%f\n%f\n%f", &a, &b, &c);
    printf("Informe o comprimento do primeiro lado do triangulo:\n");
    printf("Informe o comprimento do segundo lado do triangulo:\n");
    printf("Informe o comprimento do terceiro lado do triangulo:\n");
    
    if(a+b>c && a+c>b && c+b>a){
        printf("Os lados informados podem formar um triangulo\n");
        if(a==b && a==c){
            printf("Triangulo Equilatero");
        } else if(a==b || b==c || a==c){
            printf("Triangulo Isosceles");
        } else if(a!=b && b!=c){
            printf("Triangulo Escaleno");
        }
    } else {
        printf("Os lados informados nao podem formar um triangulo\n");
    }
    
	return 0;
}