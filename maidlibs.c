#include <stdio.h>
#include<stdlib.h>
int main()
{
    char a[30], b[30], c[30];
    printf("Enter a name:");
    scanf("%s\n" , a);
    printf("Enter a color:");
    scanf("%s\n" , c);
    printf("Enter a place:");
    scanf("%s\n" , b);
    
    printf("i hate %s\n", a);
    printf("i want to go to %s\n", b);
    printf("My fav color is %s" ,c);
    return 0;
}