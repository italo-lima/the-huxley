#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int choque(int lvl){
    if(lvl<=20){
        printf("Potencia de : %d W", 20 + (lvl*lvl*lvl));
    } else if(lvl<=40){
        printf("Potencia de : %d W", 8000 + ((lvl-10) * (lvl-10)));
    } else if(lvl<=60){
        printf("Potencia de : %d W", 9000 + (5 * lvl));
    } else if(lvl<=80){
        printf("Potencia de : %d W", 9300 + (2 * lvl));
    } else if(lvl<=100){
        printf("Potencia de : %d W", 9500 + lvl);
    }
}

int main() {
    int x;
    
    scanf("%d", &x);
    choque(x);
	return 0;
}