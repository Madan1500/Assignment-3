#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter two numbers:  ");
	scanf("%d%d",&i,&j);
	if(i>j)
	printf("%d",i);
	else
	printf("%d",j);
	
	return 0;
}