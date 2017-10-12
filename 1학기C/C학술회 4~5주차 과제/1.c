#include<stdio.h>
int main()
{
	int a = 0,b = 0;
	for (a = 0; a < 5; a++)
	{
		for (b = -1; b < a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
