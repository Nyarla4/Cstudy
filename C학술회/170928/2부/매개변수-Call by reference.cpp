#include<stdio.h>

void swap(int *pn1, int *pn2)
{
	printf("pn1 pn2 : %d %d\n", pn1, pn2);
	printf("pn1�ּҰ� pn2�ּҰ� : %d %d\n", &pn1, &pn2);
	printf("*pn1 *pn2 : %d %d\n", *pn1, *pn2);
	printf("\n");
	int temp = *pn1;//temp:pn1�� �޾ƿ� �ּҰ��� �ִ� ��,(temp��pn1)��10
	*pn1 = *pn2;//(pn1��{pn2)��num2}��20, *�� ����� �ٿ����ұ�
	*pn2 = temp;//(pn2��temp)��(��)pn1��10
	printf("pn1 pn2 : %d %d\n", pn1, pn2);
	printf("pn1�ּҰ� pn2�ּҰ� : %d %d\n", &pn1, &pn2);
	printf("*pn1 *pn2 : %d %d\n", *pn1, *pn2);
	printf("\n");
}

void main()
{
	int num1 = 10, num2 = 20;
	printf("num1 num2 : %d %d\n", num1, num2);
	printf("num1�ּҰ� num2�ּҰ� : %d %d\n", &num1, &num2);
	printf("\n");
	swap(&num1, &num2);
	printf("num1 num2 : %d %d\n", num1, num2);
	printf("num1�ּҰ� num2�ּҰ� : %d %d\n", &num1, &num2);
}