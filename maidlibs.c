#include <stdio.h>
int main()
{
    char a[30], b[30], c[30];
    printf("Enter a name");
    scanf("%c", &a);
    printf("Enter a place");
    scanf("%c", &b);
    printf("Enter a color");
    scanf("%c", &c);
    printf("i hate %c", a);
    printf("i want to go to %c",b);
    printf("My fav color is %c",c);
    return 0;
}