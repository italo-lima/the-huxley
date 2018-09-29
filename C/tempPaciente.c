#include <stdio.h>
#include <ctype.h>

int main(){
float temperatura;
char carac;

scanf("%f", &temperatura);
fflush(stdin);
if((temperatura >=35) && (temperatura <=41)){
scanf("%c", &carac);}

carac = toupper(carac);

if((carac !='N') && (carac !='S')){
    printf("Erro");
} else if((temperatura >= 37) && (carac == 'S')){
    printf("Exames Especiais");
} else if((temperatura >= 37) && (carac == 'N')){
    printf("Liberado");
} else if ((temperatura < 37) && (carac == 'S')){
    printf("Exames Basicos");
} else if((temperatura < 37) && (carac == 'N')){
    printf("Liberado");
 }

return 0;
}
