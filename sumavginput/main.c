#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z,sum=0,avg=0;
    printf("Enter first number:");
    scanf("%f",&x);
    printf("Enter second number:");
    scanf("%f",&y);
    printf("Enter third number:");
    scanf("%f",&z);
    sum=x+y+z;
    printf("SUM=%0.1f\n",sum);
    printf("AVERAGE=%0.1f",sum/3);


    return 0;
}
