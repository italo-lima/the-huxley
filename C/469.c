#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r, h, sr=0, sh=0, i;
    
    for(i=0; i<5; i++){
        scanf("%d", &r);
        scanf("%d", &h);
        
        if(r>h){
            sr = sr + r;
        }
        if (h>r){
            sh = sh + h;
        }
    }
    
    if(sr>sh){
        printf("REINALDO");
    } else if(sh>sr){
        printf("HELENA");
    } else if(sh==sr){
        printf("EMPATE");
    }
	return 0;
}