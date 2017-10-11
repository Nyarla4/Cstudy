#include<stdio.h>
#define N 5
int main()
{
	int i, j, k = 0;
	for (i = N;i >= 1;i--)
	{
		for (k = 0;k <= N - i;k++)
		{
			printf(" ");
		}
		for (j = i;j > 0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}