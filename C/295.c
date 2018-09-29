/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float xa,xb, ya, yb, distancia;
    
    scanf("%f%f", &xa, &ya);
    scanf("%f%f", &xb, &yb);
    
    distancia = pow((xb-xa),2) + pow((yb-ya),2);
    distancia = sqrt(distancia);
    printf("%.4f", distancia);
    

    return 0;
}



