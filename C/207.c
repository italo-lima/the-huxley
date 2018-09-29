#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int l, c, i, j, soma=0, rapido=1;
    
    scanf("%d%d", &l,&c);
    
    int voltas[l][c], menor[l];
    
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            scanf("%d", &voltas[i][j]);
        }
    }
    
    for(i=0; i<l; i++){
        for(j=0; j<c; j++){
            soma += voltas[i][j];
        }
            menor[i] = soma;
            soma=0;
        }
        int pmenor = menor[0];
    
    
    for(i = 1; i < l; i++){
    if(pmenor > menor[i]){
      rapido = i+1;
      pmenor = menor[i];
    }
  }
  printf("%d", rapido);
  
    return 0;
}