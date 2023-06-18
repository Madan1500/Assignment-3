// Write a program to check wheather a given number is even or odd.
#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number to check wheather it is even or odd: ");
    scanf("%d",&i);
    if((i%2)==0)
        printf("%d is an even number",i);
    else
        printf("%d is an odd number",i);
    return 0;
}