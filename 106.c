#include <stdio.h>
#include <stdlib.h>

int main() {
long int num, i, ant=1, atual=0;
scanf("%li", &num);

while(num != 0){

for(i=1; i<=num; i++){
    if(i==1){
        printf("%li",atual);
    } else {
    int prox = ant + atual;
    ant = atual;
    atual = prox;
    if(i<num){
    printf(" %li", atual);
    } else {
    printf(" %li", atual);
    }
}
}
ant=1, atual=0;
printf("\n");
scanf("%li", &num);
}
return 0; }
