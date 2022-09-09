#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x,y;
    char op[0];
    printf("Enter First Number:");
    scanf("%f",&x);
    printf("Enter Second Number:");
    scanf("%f",&y);
    printf("Enter operation:");
    scanf("%s",&op);
    if(op[0]=='+')
        printf("SUM=%0.1f",x+y);
    else if(op[0]=='-')
        printf("DIFFERENCE=%0.1f",x-y);
    else if(op[0]=='*')
        printf("MULTIPLICATION=%0.1f",x*y);
    else if(op[0]=='/')
        printf("DIVISION=%0.1f",x/y);
    else
        printf("INVALID OPERATION");


    return 0;
}
