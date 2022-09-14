#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretnumber=1
                     ;
    int guessed;
    int flag=0;
    int counter=1;
    printf("*you have 3 chances*\n");
    printf("Enter a number:");
    scanf("%d",&guessed);

    while(counter<=2)
    {
        if (guessed!=secretnumber&&flag==0)
        {
            printf("failed\n");
            printf("enter the number again:");
            scanf("%d",&guessed);
            counter++;
        }
        else
        {
            printf("YOU WINNN!");
            return 0;
        }
    }
    printf("out of guesses\n YOU LOST");


    return 0;
}
