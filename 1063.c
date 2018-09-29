#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int nota1,nota2,nota3;
    
    scanf("%d\n", &nota1);
    scanf("%d\n", &nota2);
    scanf("%d", &nota3);
    
    if ((nota1 >=0) && (nota2>=0) && (nota3>=0) && (nota1<=100) && (nota2<=100) && (nota3<=100)){
    
    if((nota1<=nota2) && (nota2<=nota3)){
        printf("%d\n%d\n%d\n", nota1,nota2,nota3);
    }
   else if((nota1<=nota3) && (nota3<=nota2)){
        printf("%d\n%d\n%d\n", nota1,nota3,nota2);
    }
   else if((nota2<=nota1) && (nota1<=nota3)){
        printf("%d\n%d\n%d\n", nota2, nota1, nota3);
    }
   else if((nota2<=nota3) && (nota3<=nota1)){
        printf("%d\n%d\n%d\n",nota2,nota3,nota1);
    }
    else if((nota3<=nota1) && (nota1<=nota2)){
        printf("%d\n%d\n%d\n",nota3,nota1,nota2);
    }
    else if((nota3<=nota2) && (nota2<=nota1)){
        printf("%d\n%d\n%d\n", nota3,nota2,nota1);
    }
    }
	return 0;
}