#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;

    scanf("%d", &num);

    int iH = num/3600;
    int rnum = num%3600;

    int iM = rnum / 60;
    int rM = rnum%60;

    printf("%d:%d:%d", iH, iM, rM);

	return 0;
}
