#include <stdio.h>
#include <string.h>

int main() {
    int i, num;

    scanf("%d", &num);
    for(i=num; i>0; i--){
        if(num%i==0)
            printf("%d\n", i);
            }
	return 0;
}
