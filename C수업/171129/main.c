#include<stdio.h>
#include"power.h"
int main(void)
{
	int x,y;

	printf("x값입력:");
	scanf("%d", &x);
	printf("y값입력:");
	scanf("%d", &y);
	printf("%d의 %d제곱값=%.2f\n",x,y,power(x,y));

	return 0;
}