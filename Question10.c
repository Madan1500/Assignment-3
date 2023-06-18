#include<stdio.h>
int main()
{
    float c,s,p,l;
    printf("Enter C.P and S.P of a product: ");
    scanf("%f%f",&c,&s);
    if(c<s)
    {
        p=s-c/c*100;
        printf("The profit is %f",p);
    }
    else
    {
        l=c-s/c*100;
        printf("The loss is %f",l);
    }
    return 0;
}
