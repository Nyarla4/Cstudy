#include<stdio.h>

void main()
{
	int r;
	int n1 = 10;
	int n2 = 20;
	int*p = &n1;
	*p += 100;//=N1+100;
	p = &n2;
	r = *p + n1;
	printf("%d %d %d\n", n1, n2, r);
}