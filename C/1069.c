#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void arredondamento(float a, float b){
    float aux;
    int i;
    
    aux = a * 100;
    aux = round(aux);
    i = aux;
    if(i % 10 == 0){
        printf("%.1f\n", a);
    } else {
        printf("%.2f\n", a);
    }
    
    aux = b * 100;
    aux = round(aux);
    i = aux;
    if(i % 10 == 0){
        printf("%.1f\n", b);
    } else {
        printf("%.2f\n", b);
    }
}

int main() {
    float ladoQuad, largRet, altRet, circRaio, comprimento, area, perimetro, PI = 3.14;
    char carac; 
    
    scanf("%c", &carac);
    
    if ((carac == 'Q') || (carac == 'q')){
        scanf("%f", &ladoQuad);
        area = ladoQuad * ladoQuad;
        perimetro = ladoQuad * 4;
        arredondamento(area, perimetro);
        
    } else if((carac == 'R') || (carac == 'r')) {
        scanf("%f", &largRet);
        scanf("%f", &altRet);
        area = largRet * altRet;
        perimetro = (2*largRet + 2*altRet);
       arredondamento(area, perimetro);
        
    } else if((carac == 'C') || (carac == 'c')){
        scanf("%f", &circRaio);
        area = PI * (circRaio * circRaio);
        comprimento = 2 * PI * circRaio;
        arredondamento(area, comprimento);
        
    } else {
        printf("Nenhuma figura selecionada");
    }
    
	return 0;
}