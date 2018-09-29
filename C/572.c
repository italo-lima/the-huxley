#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//1 para sim; 0 para n�o

int main() {
    int i, r[5], soma=0;
    
    for(i=0; i<5; i++){
        scanf("%d", &r[i]);
            }
            
            if(r[0]==0){
            soma = soma + 2;
        }
       if(r[1]==1){
            soma = soma + 1;
        }
        if(r[2]==1){
            soma = soma + 1;
        }
        if(r[3]==1){
            soma = soma + 1;
        }
        if(r[4]==1){
            soma = soma + 3;
        }

    if(soma>=5){
        printf("A Matrix esta em todo lugar. A nossa volta. E o mundo colocado diante de seus olhos, para que nao veja a verdade. Infelizmente e impossivel dizer o que e a Matrix. Voce tem de ver por si mesmo. *Voce e sugado pelo telefone e revelado a verdade");
    } else {
        printf("Voce precisa entender que a maioria dessas pessoas nao estao prontas para acordar. E muitos estao tao inertes, tao dependentes do sistema que vao lutar para protege-lo");
    }
    
	return 0;
}