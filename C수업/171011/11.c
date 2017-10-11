#include<stdio.h>
int main()
{
	int n, i = 0;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			printf(" %d ", j);
		}
		printf("\n");
	}
	return 0;
}