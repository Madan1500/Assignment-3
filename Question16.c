#include<stdio.h>
int main()
{
    int a;
    printf("Enter an alphabet in lower or upper case: ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
        printf("The alphabet is in lowercase");
    else if(a>='A' && a<='Z')
            printf("The alphabet is in uppercase");
        else if(a>='0' && a<='9')
                printf("The entered value is a digit");
            else
                printf("This is a special character");
    return 0;

}

