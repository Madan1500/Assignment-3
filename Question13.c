#include<stdio.h>
int main()
{
    int a;
    printf("Enter one number to check whether the number is divisible by 3 and 2: ");
    scanf("%d",&a);
    if(a/3 & a/2)
        printf("The number is divisible by 2 & 3 ");
    else
        printf("The number is not divisible by 2 & 3 ");
    return 0;

}
