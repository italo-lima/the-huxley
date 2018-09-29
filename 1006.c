#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

int n, num, i;

scanf("%d", &num);
while(num != 0){
     int aux = 1;
     int aux2 = 0;

    while(1){
     int sub = aux*aux - aux2*aux2;

     if(sub == num){
        printf("%d - %d\n", aux*aux, aux2*aux2);
        break;
     }
        aux++;
        aux2++;
    }
    scanf("%d", &num);
}
return 0;
}


