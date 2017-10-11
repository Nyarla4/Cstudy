#include<stdio.h>
#define N 5
int main()
{
	int i, k = 0;
	for (i = N;i >= 1;i--)
	{
		for (k = 0;k <= N - i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}