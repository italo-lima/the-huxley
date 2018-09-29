#include <stdio.h>

int main() {
    /*
    int valor;
    char nomes [3][6] = {"Joao","Maria","Italo"};

    scanf("%i", &valor);

    if(valor <=10){
        printf("%s", nomes[0]);
    } else if((valor > 10) && (valor <=50)){
        printf("%s", nomes[1]);
    } else if(valor <=100){
        printf("%s", nomes[2]);
    } else {
        printf("Nenhum");
    } */

  long int valor;
  scanf("%ld", &valor);

  (valor <= 10)? printf("Arthur") : (valor <= 30)? printf("Luiz") : (valor <= 100)? printf("Pedro") : printf("Nenhum");
	return 0;
}
