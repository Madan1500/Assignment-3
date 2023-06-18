#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number to check the number is a even or odd number");
    scanf("%d",&i);
    if(i&1)
    {
        printf("The entered number is an odd number");
    }
    else
    {
        printf("The entered number is even");
    }
    return 0;
}
