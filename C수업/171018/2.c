#include<stdio.h>
int main()
{
	int a[5];
	int m, M = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("�����Է� : ");
		scanf("%d", &a[i]);
	}
	m = a[0];
	for (int i = 0; i < 5; i++)
	{
		if (a[i] < m)
			m = a[i];
		if (a[i] > M)
			M = a[i];
	}
	printf("�ִ밪:%d �ּҰ�:%d\n", M, m);
	return 0;
}