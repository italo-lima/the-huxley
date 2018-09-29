#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      int num, i, soma3=0, soma5=0;
    
    scanf("%d", &num);
    
    for(i = 1; i< num; i++)
    {
        if((i*3) < num && (i*3)%5 != 0)
        {
        	soma3 += i*3;
        }
   
        if((i*5) < num)
        {
            soma5 += i*5;
        }
    }
    printf("%d", soma3+soma5);
	return 0;
}