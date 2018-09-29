#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int matriz[12][2], j, i;
    double lucroT, custoT,anualC1=0, anualL1=0, anualC2=0, anualL2=0;
    
    for(i=0; i<12; i++){
        for(j=0; j<2; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    double custo1, custo2, lucro1, lucro2;
    
    scanf("%lf %lf",&custo1, &lucro1);
    scanf("%lf %lf",&custo2, &lucro2);
    
    for(i=0; i<12; i++){
        for(j=0; j<2; j++){
            if(j==0){
                lucroT = matriz[i][j];
                custoT = matriz[i][j];
                custoT = custoT * custo1;
                lucroT = lucroT * lucro1;
                anualC1 += custoT;
                anualL1 += lucroT;
                printf("Motor[%d], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n", j, i+1, custoT, lucroT);
            } 
        }
    }
        
        for(i=0; i<12; i++){
        for(j=0; j<2; j++){
            if(j==1){
                lucroT = matriz[i][j];
                custoT = matriz[i][j];
                custoT = custoT * custo2;
                anualC2 += custoT;
                lucroT = lucroT * lucro2;
                anualL2 += lucroT;
                printf("Motor[%d], Mes[%d], custo=[%.2lf], lucro=[%.2lf]\n", j, i+1, custoT, lucroT);
            } 
        }
    }
    printf("Motor[0], anual, custo=[%.2lf], lucro=[%.2lf]\n", anualC1, anualL1);
    printf("Motor[1], anual, custo=[%.2lf], lucro=[%.2lf]\n", anualC2, anualL2);
	return 0;
}