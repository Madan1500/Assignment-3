// WRITE A PROGRAM TO CHECK WHETHER A GIVEN YEAR IS LEAP YEAR OR NOT.
#include<stdio.h>
int main()
{
    int i;
    printf("Enter the year: ");
    scanf("%d",&i);
    if((i%100)==0)
    {
        if((i%400)==0)
            printf("%d is a leap year",i);
        else
            printf("%d is a non leap year",i);
    }
    else if((i%4)==0)
        printf("%d is a leap year",i);
    else
        printf("%d is non leap year");
        
    return 0;

}