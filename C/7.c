#include <stdio.h>
#include <stdlib.h>

int main() {

    double a, b;
    char carac;

     scanf("%lf", &a);

    while(1){
        scanf("%lf", &b);
        getchar();
        scanf("%c", &carac);

        if(carac =='&'){
            break;
        } else if(carac=='+'){
           a = a+b;
           printf("%.3lf\n", a);
        } else if(carac=='-'){
           a = a-b;
           printf("%.3lf\n", a);
        } else if(carac=='*'){
           a = a*b;
           printf("%.3lf\n", a);
        } else if(carac=='/'){
            if(b==0){
             printf("operacao nao pode ser realizada\n");
             continue;
            } else {
           a = a/b;
           printf("%.3f\n", a);
            }
        }
    }
	return 0;
}
