#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int n,i;
int V1, D1, V2, D2;
scanf("%d", &n);

int contador, aux, aux2, clodes = 0;

for(i=0;i<n;i++){
    scanf("%d %d %d %d", &V1,&V2,&D1,&D2);

    int rounds = V1%D2 == 0? V1/D2 : V1/D2 + 1;

    for(contador=0; contador <rounds ; contador++){
        aux = D1+ (50*contador);
        aux2 = rounds - contador;
        if(aux * aux2 >= V2){
            clodes = 1;
            break;
        }
    }

    if(clodes){
       printf("Clodes\n");
    }else{
       printf("Bezaliel\n");
    }
    clodes = 0;

    }

return 0;
}
