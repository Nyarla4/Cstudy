#include<stdio.h>
#define N 50

int main()
{
	char a[N];
	int n = -1;
	int c = 0;
	scanf("%s",a);
	for (int i = 0; a[i]!=NULL; i++)
	{
		n++;
	}
	for (int i = 0; i < n; n++)
	{
		if (a[i] != a[n-1 - i])
		{
			c = 1;
		}
	}
	if (c == 1)
	{
		printf("ȸ���� �ƴմϴ�");
	}
	else
		pritf("ȸ���Դϴ�");
	return 0;
}