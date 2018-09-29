#include <stdio.h>
#include <string.h>

int main() {
    int x , ano=1986;
    scanf ("%d",&x);
    if (x<=2010)
    printf("2062");
    if ((x>2010)&&(x<=10000)){
    while (ano<=x)
    {
    ano+=76;
    }
    printf ("%d",ano);
    } 
	return 0;
}