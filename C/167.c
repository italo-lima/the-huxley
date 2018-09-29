#include <stdio.h>
#include <stdlib.h>

int main() {
    int voto, Ali = 0, Alc = 0, Branco = 0, Nulo = 0;
    float pAli, pAlc;
    
    while(voto!=1){
        scanf("%d", &voto);
        
        if(voto == -1)
        break;
    
     switch(voto){
         case 83: 
         Ali++; break;
         case 93:
         Alc++; break;
         case 0:
         Branco++; break;
         default:
         Nulo++; break;
        }
    }
    
    pAli = (Ali*100) / (float)(Ali+Alc+Branco);
    pAlc = (Alc*100) / (float)(Ali+Alc+Branco);
    
    printf("%d\n", Ali);
    printf("%d\n", Alc);
    printf("%d\n", Branco);
    printf("%d\n", Nulo);
    if(Alc>Ali){
    printf("93\n");
    } else {
    printf("83\n");
    }
    printf("%.2f\n", pAli);
    printf("%.2f\n", pAlc);
    
	return 0;
}