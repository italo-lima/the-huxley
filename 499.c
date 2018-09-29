
#include <stdio.h>

int valor (int a, int b){
    int i, soma=0;
    
    for(i=b+1; i<a; i++){
        if((1000%i == 0) && (i%4 == 0)){
            soma +=i;
        }
    }
    return soma;
}

int main()
{
    int a, b, aux, resultado;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a>b){
      resultado = valor(a,b);
    } else {
        resultado =valor(b,a);
    }

    printf("%d", resultado);
    return 0;
}



