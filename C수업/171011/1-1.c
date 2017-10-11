#include<stdio.h>
#define N 5
int main()
{
	int i, j = 0;
	for (i = N;i >= 1;i--)
	{
		for (j = i;j > 0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}