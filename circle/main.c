#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,k,r;
    scanf("%d",&r);
    for (i=0; i<(2*r+1); i++)
    {
        for (k=0; k<=(2*r+1); k++)
        {
            if(pow(i-r,2) + pow(k-r,2) <= pow(r,2)+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            printf(" ");

        }
        printf("\n");
    }
}
