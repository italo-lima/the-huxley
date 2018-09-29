#include <stdio.h>
#include <math.h>


int main(void) {
	int Chomem = 0, Cmulher = 0, i, mani = 0;
	float salario, sh = 0, maior = 0, total = 0;
	char sexo[1], mc[1];
	
	for(i = 0; i < 10; i++){
	  scanf("%f\n%c", &salario, &sexo[0]);
	  total += salario;
	  switch(sexo[0]){
	    case 'm':
	      Chomem++;
	      sh += salario;
	      if(salario > maior){
	        mc[0] = 'm';
	        maior = salario;
	      }
	      break;
	    
	    case 'f':
	      Cmulher++;
	      if(salario > maior){
	        mc[0] = 'f';
	        maior = salario;
	      }
	      break;
	      
	  }
	}
	printf("%d\n%d\n", Chomem, Cmulher);
	total /= 10.0;
	mani = round(total*100);
	if(mani%10==0)printf("%.1f\n%c\n", total, mc[0]);
	else printf("%.2f\n%c\n", total, mc[0]);
	sh /= Chomem*1.0;
	mani = round(sh*100.0);
	if(mani%10==0) printf("%.1f", sh);
	else printf("%.2f", sh);
	
	return 0;
}