#include<stdio.h>
int main()
{
	int i, j, k = 0;
	for (i = 6;i >= 0;i--)
	{
		for (k = 1;k < 8 - i;k++)
		{
			printf("%d",k);
		}
		for (j = i;j > 0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}