#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int maior,menor,auxiliar =-1;
    scanf("%d %d %d", &a,&b,&c);

    a>b? (maior=a,menor=b) : (maior=b,menor=a); //Apenas descobrir quem � o maior e menor entre a e b

    while(auxiliar!=0)  //Loop dividindo maior por menor at� que o resto for 0
    {
        auxiliar = (maior%menor);
        maior = menor;
        menor = auxiliar;
    }

    c % maior == 0? printf("S") : printf("N"); //C � multiplo do maior ap�s as divis�es?
    return 0;
}