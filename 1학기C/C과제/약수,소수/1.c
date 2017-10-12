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
					//printf("%d의 약수는%d\n", inp, i);
					chk++;
				}
			}
			printf("%d의 약수의 개수는 %d개\n", inp, chk);
			if (chk == 2)
			{
				printf("%d는 소수\n", inp);
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
					//printf("%d의 약수는%d\n", inp, i);
					chk++;
				}
			}
			printf("%d의 약수의 개수는 %d개\n", inp, chk);
			if (chk == 2)
			{
				printf("%d는 소수\n", inp);
			}
			chk = 0;
			scanf("%d", &inp);
		}
	}
	printf("0의 약수가 있던가\n");
	return 0;
}*/