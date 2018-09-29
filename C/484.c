#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=1, macaco=0, tigre=0, cobra=0;
    char animal[20], origem[20], opc[20];
    float soma=0, peso;
    
    while(i>0){
        scanf("%s", animal);
        getchar();
        scanf("%f", &peso);
        getchar();
        scanf("%[^\n]s", origem);
        getchar();
        scanf("%s", opc);
        getchar();
        
        if(strcasecmp(animal,"macaco")==0){
            macaco++;
        } else if(strcasecmp(animal,"tigre")==0){
            soma = soma + peso;
            tigre++;
        } else if(strcasecmp(animal,"cobra")==0 && strcasecmp(origem,"venezuela")==0){
            cobra++;
        }
        i++;
        if(strcasecmp(opc,"parar")==0){
            break;
    }
    }
    
    printf("%d\n", macaco);
    if(tigre>0){
    printf("%.2f\n", soma/(float)tigre);
    } else {
     printf("0.00\n");
    }
    printf("%d", cobra);
	return 0;
}