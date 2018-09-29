#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int corte=0, barba=0, i=1;
    char opc[10], sexo;
    float valor=0;
    
    while(i!=0){
        scanf("%c", &sexo);
        getchar();
        
        if(sexo=='m' || sexo=='M' || sexo=='f' || sexo=='F'){
        scanf("%s", opc);
        getchar();
        
        if(sexo=='m' || sexo=='M'){
            if(strcasecmp(opc,"corte")==0){
                valor = valor + 25.0;
                corte++;
            } else if(strcasecmp(opc,"barba")==0){
                valor = valor + 15.0;
                barba++;
            }
        } else if(sexo=='f' || sexo=='F'){
            if(strcasecmp(opc,"corte")==0){
                valor = valor + 40.0;
        } else if(strcasecmp(opc,"penteado")==0){
                valor = valor + 50.0;
    } else if(strcasecmp(opc,"maquiagem")==0){
                valor = valor + 70.0;
    }
        }
    } else {
        break;
    }
    }
    
    if(corte==0 && barba==0){
         printf("AMBOS\n");
    }else if(corte==barba){
        printf("AMBOS\n");
    } else if(corte>barba){
        printf("CORTE\n");
    } else {
        printf("BARBA\n");
    }
    printf("%.2f", valor);
	return 0;
}