#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, menor=0, maior=0, i;
    
    scanf("%d", &num);
   
   if(num!=-1){
       menor = num;
       maior = num;
       printf("menor=%d||MAIOR=%d\n",menor,maior);
   } 
   
    while(num!=-1){
        scanf("%d", &num);
        if(num!=-1){
        if(num<menor){
        menor = num; 
        }
        if(num>maior){
        maior = num;
        }
        printf("menor=%d||MAIOR=%d\n",menor,maior);
        }
        if(num==-1) {
            for(i=menor;i<=maior;i+=menor)
            {
                if(i==menor && i==maior) 
                {
                    printf("%d",i);
                }
                else if(i==menor)
                {
                    printf("%d|",i);
                }
                else if(i==maior || maior<i+menor)
                {
                    printf("|%d",i);
                }
                else {
                    printf("|%d|",i);
                }
            }
    }
        }
	return 0;
}