//Write a program to check whether a given alphabet is in uppercase or lower case
#include<stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet in lower or upper case: ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
        printf("The alphabet is in lowercase");
    else
        if(a>='A' && a<='Z')
        printf("The alphabet is in uppercase");
        else
            printf("Enter a alphabet only");
    return 0;

}
