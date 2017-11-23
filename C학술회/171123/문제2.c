#include<stdio.h>
int *array_sum(int *a, int *b)
{
	int temp[10];
	for (int i = 0; i < 10; i++)
	{
		temp[i]=a[i]+b[i];//Call by Reference X,Call by Value
	}
	return temp;
}
void main()
{
	int C[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int D[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
	int E[10];
	int*parr = NULL;
	parr = array_sum(C, D);
	for (int i = 0; i < 10; i++)
	{
		E[i] = parr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",E[i]);
	}
	return 0;
}