/*#include<stdio.h>
int main()
{
	int inp = 0;
	int chk = 0;
	int i;
	scanf("%d", &inp);
	while (inp != 0)
	{
		if (inp < 0)
		{
			for (i = inp; i < 0; i++)
			{
				if (inp%i == 0)
				{
					//printf("%d�� �����%d\n", inp, i);
					chk++;
				}
			}
			printf("%d�� ����� ������ %d��\n", inp, chk);
			if (chk == 2)
			{
				printf("%d�� �Ҽ�\n", inp);
			}
			chk = 0;
			scanf("%d", &inp);
		}
		else
		{
			for (i = inp; i > 0; i--)
			{
				if (inp%i == 0)
				{
					//printf("%d�� �����%d\n", inp, i);
					chk++;
				}
			}
			printf("%d�� ����� ������ %d��\n", inp, chk);
			if (chk == 2)
			{
				printf("%d�� �Ҽ�\n", inp);
			}
			chk = 0;
			scanf("%d", &inp);
		}
	}
	printf("0�� ����� �ִ���\n");
	return 0;
}*/