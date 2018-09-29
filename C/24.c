#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=1, num, fat;
    
    while(i>0){
        scanf("%d", &num);
        if(num<0){
            break;
        } else {
        for(fat=1; num>1; num=num -1){
            fat = fat * num;
        }
        printf("%d\n", fat);
        }
    }
    
    return 0;
}