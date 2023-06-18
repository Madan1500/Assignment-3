#include<stdio.h>
int main()
{
    int a,b,c;          //a,b,c are sides of triangle
    printf("Enter the sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
        printf("The triangle is valid");
    else
        printf("The triangle is invalid");
    return 0;
}
