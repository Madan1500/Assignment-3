#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    printf("Enter the month number to display the numbr of days in that month : ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
       printf("January consists of 31 days");
       printf("\n");
       break;
    case 2:
        printf("February consists of 28 days");
        printf("\n");
        break;
    case 3:
        printf("March consists of 31 days");
        printf("\n");
        break;
    case 4:
        printf("April consists of 30 days");
        printf("\n");
        break;
    case 5:
        printf("May consists of 31 days");
        printf("\n");
        break;
    case 6:
        printf("June consists of 30 days");
        printf("\n");
        break;
    case 7:
        printf("July consists of 31 days");
        printf("\n");
        break;
    case 8:
        printf("August consists of 31 days");
        printf("\n");
        break;
    case 9:
        printf("September consists of 30 days");
        printf("\n");
        break;
    case 10:
        printf("October consists of 31 days");
        printf("\n");
        break;
    case 11:
        printf("November consists of 30 days");
        printf("\n");
        break;
    case 12:
        printf("December consists of 31 days");
        printf("\n");
        break;
    }
return 0;
}

