#include<stdio.h>
int main()
{
	int mArray[100];
	int*p = mArray;
	unsigned int N = 0;
	for (int i = 0; i < 100; i++)
	{
		if (i == 0)
		{
			mArray[i] = 0;
		}
		else if (i == 1)
		{
			mArray[i] = 1;
		}
		else
		{
			mArray[i] = mArray[i - 2] + mArray[i - 1];
		}
	}
	printf("N값 : ");
	scanf("%d", &N);
	while (N >= 100)
	{
		if (N >= 100)
		{
			printf("값을 초과했습니다\n");
			printf("N값 : ");
			scanf("%d", &N);
		}
	}

	if (N < 100)
	{
		for (int i = 0; i < N; i++)
		{
			printf("%d \n", *(p+i));
		}
	}
	return 0;
}