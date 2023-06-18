//Write a program to check the given number is three digit or not
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>99&&x<1000)
        printf("The number entered is three digit");
    else
        printf("The number entered is not three digit");
    return 0;
}
