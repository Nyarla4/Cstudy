#include<stdio.h>
#include"power.h"
int main(void)
{
	int x,y;

	printf("x���Է�:");
	scanf("%d", &x);
	printf("y���Է�:");
	scanf("%d", &y);
	printf("%d�� %d������=%.2f\n",x,y,power(x,y));

	return 0;
}