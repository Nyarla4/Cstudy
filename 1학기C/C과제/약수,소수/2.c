#include<stdio.h>
int main()
{
	int inp = 1;
	int chk = 0;
	int i,j,k=0;
	scanf("%d", &j);
	if (j == 0)
	{
		printf("0�� ����� �ִ���");
		return 0;
	}
	while (inp != 0)
	{
		for (inp = 1; inp <= j; inp++)	
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
					//printf("%d�� ����� ������ %d��\n", inp, chk);
					if (chk == 2)
					{
						//printf("%d�� �Ҽ�\n", inp);
						k++;
					}
					chk = 0;
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
					//printf("%d�� ����� ������ %d��\n", inp, chk);
					if (chk == 2)
					{
						//printf("%d�� �Ҽ�\n", inp);
						k++;
					}
					chk = 0;
				}
			}
		printf("%d���� �Ҽ��� %d��", inp-1, k);
		inp = 0;
	}
	printf("\n");
	return 0;
}