#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double valorInicial, juros, tempo, montanteF=0,montante=0, rendimento=0;
    int i;
    
    scanf("%lf %lf %lf", &valorInicial, &juros, &tempo);
    tempo = (tempo * 12) / 3;
    montante = valorInicial;
    montanteF = valorInicial * pow((1 + juros), 1);
        rendimento = montanteF - montante;
        montante = valorInicial;
        printf("Rendimento: %.2lf ", rendimento);
      printf("Montante: %.2lf\n", montanteF);
  
    for(i=2; i<=tempo; i++){
        montante = montanteF;
        montanteF = valorInicial * pow((1 + juros), i);
        rendimento = montanteF - montante;
      printf("Rendimento: %.2lf ", rendimento);
      printf("Montante: %.2lf\n", montanteF);
    }
    
	return 0;
}