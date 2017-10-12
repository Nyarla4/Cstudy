#include<stdio.h>
int main()
{
	int star1=0,star2=0,space=0;
	for (star1 = 5; star1 > 0; star1--)
	{
		for (space = 0; space < star1; space++)
		{
			printf(" ");
			
		}
		for (star2 = 5; star2 > star1; star2--)
		{
			printf("**");
		}
		printf("*\n");
	}

	return 0;
}
