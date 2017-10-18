#include<stdio.h>
void line()
{
	for (int i = 0; i <= 20; i++)
	{
		printf("-");
	}
	printf("\n");
}
int main()
{
	int a[10];
	int b[10] = { 0 };
	char c = 0;
	int d = 0;
	for (int i = 0; i<10; i++)
	{
		a[i] = i + 1;
	}
	while (1)
	{
		printf("좌석을 예약할것인가 (y/n)");
		c = getch();
		printf("\n");
		if (c != 'y')
		{
			printf("종료\n");
			break;
		}
		line();
		for (int i = 0; i<10; i++)
		{
			printf(" %d", a[i]);
		}
		printf("\n");
		line();
		for (int i = 0; i<10; i++)
		{
			printf(" %d", b[i]);
		}
		printf("\n");
		printf("몇번째 좌석을 예약할것인가");
		scanf("%d", &d);
		b[d - 1] = 1;
		printf("예약되었다.\n");
	}


	return 0;
}