#include<stdio.h>
#define N 10
void odd_nunber(int *a)
{
	printf("È¦¼ö : ");
	for (int i = 0; i < N; i++)
	{
		if (a[i] % 2 != 0)
			printf("%d ", a[i]);
	}
	printf("\n");
}
void even_nunber(int *a)
{
	printf("Â¦¼ö : ");
	for (int i = 0; i < N; i++)
	{
		if (a[i] % 2 == 0)
			printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	int a[N] = { 0 };
	printf("ÃÑ %d°³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À.\n", N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	odd_nunber(a);
	even_nunber(a);
	return 0;
}