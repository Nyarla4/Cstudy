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
		printf("�¼��� �����Ұ��ΰ� (y/n)");
		c = getch();
		printf("\n");
		if (c != 'y')
		{
			printf("����\n");
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
		printf("���° �¼��� �����Ұ��ΰ�");
		scanf("%d", &d);
		b[d - 1] = 1;
		printf("����Ǿ���.\n");
	}


	return 0;
}