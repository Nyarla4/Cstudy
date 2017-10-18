#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n[10]={0};
	int rn = 0;
	int M=0, c = 0;
	for (int i = 0; i<10; i++)
	{
		rn = rand(time) % 10;
		n[rn] += 1;
	}
	for (int i = 0; i<10; i++)
	{
		if (n[i]>M)
		{
			M = n[i];
			c = i;
		}
	}
	printf("가장 많이 나온 난수:%d\n", c);
	return 0;
}