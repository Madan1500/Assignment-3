#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter your marks in 5 subjects out of 100: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
    {
        printf("You have passed the examination");
    }
    else
    {
        printf("You have failed");
    }
    return 0;
}
