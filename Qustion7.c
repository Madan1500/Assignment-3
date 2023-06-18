#include<stdio.h>
int main()
{
    int a,b,c;
    int disc=b*b-4*a*c;
    printf("Enter a,b,c values");
    scanf("%d%d%d",&a,&b,&c);
    if(disc>0)
        printf("Real and Distinct");
    else
        if(disc<0)
            printf("Imaginary");
        else
            printf("Real and Equal");


    return 0;
}

