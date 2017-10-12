#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, a_ = 0;
	for (a = 1; a < 13; a++)
	{
		for (e = 0; e < a; e++)
		{
			printf(" ");
		}

		printf("*");
		for (d = 0; d < 2 * (13 - a); d++)
		{
			a_ = a % 4;
			if (a_ == 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("*");

		printf("\n");
	}
	for (e = 0; e < 13; e++)
	{
		printf(" ");
	}
	printf("**\n");
	for (a = 1; a < 13; a++)
	{
		for (c = 0; c < 13 - a; c++)
		{
			printf(" ");
		}

		printf("*");
		for (b = 0; b < 2 * a; b++)
		{
			a_ = a % 4;
			if (a_ == 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("*");

		printf("\n");
	}
	return 0;
}
