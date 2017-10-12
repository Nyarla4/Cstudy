#include<stdio.h>
int main()
{
	int num1=0,num2=0,num3=0;
	for (num1 = 0; num1 < 7; num1++)
	{
		for (num2 = 0; num2 < num1; num2++)
		{
			printf("*");
		}
		printf(" \n");
	}
	printf(" \n");
	for (num1 = 7; num1 >=0 ; num1--)
	{
		for (num2 = num1; num2 >0; num2--)
		{
			printf("*");
		}
		printf(" \n");
	}
	printf(" \n");
		for (num1 = 0; num1 < 7; num1++)
	{
		for (num2 = 7; num2 > num1; num2--)
		{
			printf(" ");
		}
		for(num3=0;num3<num1;num3++)
		{
			printf("**");
		}
		printf("*\n");
	}
	return 0;
}
