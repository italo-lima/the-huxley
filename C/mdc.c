#include <stdio.h>

int mdc (int a, int b){
if (a % b != 0){
    return mdc(b, a % b);;
} else {
    return b;
}
}

int main(){

int a, b, quant,i;

    scanf("%i", &quant);

for (i=1; i<=quant; i++){
  scanf("%i", &a);
  scanf("%i", &b);
  printf("MDC(%i,%i) = %i\n", a,b,mdc(a,b));
}
/*for(i=1; i<=quant; i++){

} */

return 0;
}
