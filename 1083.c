#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     char bairro;
     int consumo, renda;
     
    scanf("%c%d%d", &bairro, &renda, &consumo);
    
    if(bairro=='S' && renda>0 && consumo>0) {
        if(renda>=50 && renda<=500)
        {
            printf("%d", consumo-50);
        }
        else if(renda>500 && renda<=1000)
        {
            printf("%d", consumo-25);
        }
        else
        {
            printf("%d", consumo);
        }
    }
    else if(bairro=='I')
    {
        if(renda>=240 && renda<=1000)
        {
            printf("%d", consumo-240);
        }
        else if(renda>1000 && renda<=5000)
        {
            printf("%d", consumo-120);
        }
        else
        {
            printf("%d", consumo);
        }
    }
    else if(bairro=='T')
    {
        if(renda>=5000 && renda<=10000)
        {
            printf("%d", consumo-720);
        }
        else if(renda>10000 && renda<=20000)
        {
            printf("%d", consumo-360);
        }
        else
        {
            printf("%d", consumo);
        }
    }
    else if(bairro=='S' && renda<0 || consumo<0)
    {
        
    }
    
    
    else
    {
        printf("Bairro invalido.");
    }
    
    if(renda<0 ||consumo<0)
    {
        printf("Renda e consumo nao podem ser negativos.");
    }
    
    
	return 0;
}