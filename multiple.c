#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i;
    do
    {

    printf("Enter number 2-19 (0 to QUIT) : ");
    scanf("%d",&number);
    if(number>=2&&number<=50&&number!=0)
    {
        printf("Multiplication Table for %2d\n",number);
        i=1;
        while(i<=12)
        {
            printf("%5d",i);
            i++;
        }
        printf("\n------------------------------------------------------------\n");
        i=1;
        while(i<=12)
        {
            printf("%5d",number*i);
            i++;
        }
        printf("\n");
    }
    else if(number!=0)
        printf("Input Error. Enter 0 to QUIT or number between 2-19.\n");
    }while(number!=0);
        printf("GOODBYE");


    return 0;
}
