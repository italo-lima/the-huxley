#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int maiorValor(int a, int b, int c){
    int maiorAB = (a + b + abs(a - b)) /2;
    int maiorF = (maiorAB + c + abs(maiorAB - c)) /2;
    
    return maiorF;
}

int main() {
    int a, b, c;
    
    scanf("%d\n%d\n%d", &a, &b, &c);
    int maior = maiorValor(a,b,c);
    
    printf("%d eh o maior", maior);
    
    
	return 0;
}