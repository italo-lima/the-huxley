#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, nota3;
    
    scanf("%f\n%f\n%f", &nota1, &nota2, &nota3);
    float media = (nota1+nota2+nota3) / 3.0;
    
    if(media>=7){
        printf("aprovado\n");
    } else if(media>=3 && media<7){
        printf("prova final\n");
    }else{
        printf("reprovado\n");
    }

	return 0;
}