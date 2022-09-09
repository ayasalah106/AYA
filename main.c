#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[20],y[20],z[20];
    printf("enter a name:");
    scanf("%s",&x);
    printf("enter a color:");
    scanf("%s",&y);
    printf("enter a place:");
    scanf("%s",&z);
    printf("i hate %s\n",x);
    printf("%s is my fav color\n",y);
    printf("i want to go to %s",z);


    return 0;
}
