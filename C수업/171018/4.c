#include<stdio.h>
int main()
{
	int GG[9][9];
	int a, b;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			GG[i][j] = (i + 1)*(j + 1);
		}
	}
	printf("구구단 입력(예: 5 3)");
	scanf("%d %d", &a, &b);
	printf("%d×%d=%d\n", a, b, GG[a-1][b-1]);
	return 0;
}