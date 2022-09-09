#include<stdio.h>
int main()
{
    int n,i,j;

    /*char arr[n][n];
    while(n>=2&&n<=5)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j >=n-(i-1)&& j<= n+(i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    break;
    }*/

    /*char arr[5][10]={"    *    ","   ***   ","  *****  "," ******* ","*********"};
    printf("how many rows you want:");
    scanf("%d", &n);
    while(n>=2&&n<=5)
    {
        for(i=0;i<n;i++)
        {
            printf("%s\n",arr[i]);
        }

        break;
    }
    printf("REFUSED");*/

    char arr1[10]= {"    *    "};
    char arr2[10]= {"   ***   "};
    char arr3[10]= {"  *****  "};
    char arr4[10]= {" ******* "};
    char arr5[10]= {"*********"};
    printf("Enter height of pyramid : ");
    scanf("%d",&i);
    if(i==1)
        printf("%s\n",arr1);
    else if(i==2)
    {
        printf("%s\n",arr1);
        printf("%s\n",arr2);
    }
    else if(i==3)
    {
        printf("%s\n",arr1);
        printf("%s\n",arr2);
        printf("%s\n",arr3);
    }
    else if(i==4)
    {
        printf("%s\n",arr1);
        printf("%s\n",arr2);
        printf("%s\n",arr3);
        printf("%s\n",arr4);
    }
    else if(i==5)
    {
        printf("%s\n",arr1);
        printf("%s\n",arr2);
        printf("%s\n",arr3);
        printf("%s\n",arr4);
        printf("%s\n",arr5);
    }



}
