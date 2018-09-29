#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, brinde=0, socio=0;
    char tpCarro[7], svc[10], tpCliente[10];
    float soma=0;
    
    for(i=0; i<5; i++){
        scanf("%s", tpCarro);
        getchar();
        scanf("%[^\n]s", svc);
        getchar();
        scanf("%s", tpCliente);
        getchar();
        
        if(strcasecmp(tpCarro,"pequeno")==0){
            if(strcasecmp(svc,"sem cera")==0){
                if(strcasecmp(tpCliente,"S�cio")==0){
                    socio++;
                soma = soma + 20;
            } else {
                soma = soma +30;
            }
        } else {
            brinde++;
            if(strcasecmp(tpCliente,"n�o-s�cio")==0){
            soma = soma + 40;
        } else {
                socio++;
            soma = soma +30;
        }
    }
    } else if(strcasecmp(tpCarro,"grande")==0){
        if(strcasecmp(svc,"sem cera")==0){
            if(strcasecmp(tpCliente,"S�cio")==0){
                socio++;
                soma = soma +40;
            } else {
                soma = soma +50;
            }
        } else {
            brinde++;
            if(strcasecmp(tpCliente,"S�cio")==0){
                socio++;
            soma = soma +60;
            } else {
                soma = soma + 80;
            }
          }
        }
    }
    printf("%d\n%d\n", socio, brinde);
    printf("%.2f", soma);
	return 0;
}