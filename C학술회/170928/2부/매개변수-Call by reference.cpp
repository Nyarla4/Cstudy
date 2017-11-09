#include<stdio.h>

void swap(int *pn1, int *pn2)
{
	printf("pn1 pn2 : %d %d\n", pn1, pn2);
	printf("pn1주소값 pn2주소값 : %d %d\n", &pn1, &pn2);
	printf("*pn1 *pn2 : %d %d\n", *pn1, *pn2);
	printf("\n");
	int temp = *pn1;//temp:pn1이 받아온 주소값에 있는 값,(temp←pn1)←10
	*pn1 = *pn2;//(pn1←{pn2)←num2}←20, *을 어디쯤 붙여야할까
	*pn2 = temp;//(pn2←temp)←(전)pn1←10
	printf("pn1 pn2 : %d %d\n", pn1, pn2);
	printf("pn1주소값 pn2주소값 : %d %d\n", &pn1, &pn2);
	printf("*pn1 *pn2 : %d %d\n", *pn1, *pn2);
	printf("\n");
}

void main()
{
	int num1 = 10, num2 = 20;
	printf("num1 num2 : %d %d\n", num1, num2);
	printf("num1주소값 num2주소값 : %d %d\n", &num1, &num2);
	printf("\n");
	swap(&num1, &num2);
	printf("num1 num2 : %d %d\n", num1, num2);
	printf("num1주소값 num2주소값 : %d %d\n", &num1, &num2);
}