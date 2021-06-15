#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float num1, num2, num3, raiz, raiz2, delta;
    scanf("%f%f%f", &num1, &num2, &num3);
    delta= (num2*num2)-4*(num1*num3);
    if (delta<0)
    {
        printf("NRR\n");
    }else if (num2==0 || num3==0 || num1==0)
    {
        printf("NEESG");
    }
    
    else if (delta >=0)
    {
        raiz= (-num2 +sqrtf(delta))/(2*num1);
        raiz2= (-num2 -sqrtf(delta))/(2*num1);
        printf("%.2f\n%.2f", raiz, raiz2);
    }
    return 0;
    
    
}