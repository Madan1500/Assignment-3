//Write a program to check wheather a given number is positive or non positive
#include<stdio.h>
int main()
    {
        int i;
        printf("Enter a number to check wheather its is positive or non-positive: ");
        scanf("%d",&i);
        if(i>0)
        {
            printf("%d is a positive number.",i);
        }
        else
            printf("%d is a non positive number.",i);
        return 0;
    }
