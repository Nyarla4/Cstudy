#include<stdio.h>
#define N 10

void change1(char *a)//NULL까지로해서 전체를 역순으로 정렬
{
	char c[N];
	for (int i = 0; a[i] != NULL; i++)
	{
		 c[(N-1)-i]= *(a + i);
	}
	for (int i = 0; a[i] != NULL; i++)
	{
		*(a + i) = c[i];
	}
}
void change2(char*a,int*b)//' '까지로해서 역순으로 정렬
{
	char c[N];
	for (; a[*b] != NULL; b++)
	{
		for (int i = 0; a[i] != ' '; i++)
		{
			c[(N - 1) - i] = *(a + i);
		}
	}
	for (int i = 0; a[i] != NULL; i++)
	{
		*(a + i) = c[i];
	}
}
int main()
{
	char a[] = { "I LOVE YOU" };
	char*p = a;
	int b = 0;
	int*q = &b;
	change1(p);
	//change2(p,q);
	for (int i=0;a[i]!=NULL;i++)
	{
		printf("%c", *(a + i));
	}
	return 0;
}