#include<stdio.h>
#include<string.h>
#define Q 10
void rvs_1(char B[])
{
	int a = 0;
	a = strlen(B);
	for (int i = a - 1;i >= 0;i--)
	{
		printf("%c", B[i]);
	}
	printf("\nreverse_1\n");
}
void rvs_2(char*p)
{
	int a = 0;
	a = strlen(p);
	for (int i = a - 1;i >= 0;i--)
	{
		printf("%c", *(p + i));
	}
	printf("\nreverse_2\n");
}
void rvs_3(char*p)
{
	int a;
	a = strlen(p) - 1;
	char temp[500000] = { 0 };
	for (int i = 0;i <= a;i++)
	{
		temp[i] = *(p + a - i);
	}
	for (int i = 0;i <= a;i++)
	{
		*(p + i) = temp[i];
	}
	printf("\nreverse_3\n");
}
void arr_sum(int a[], int b[],int*c)
{
	int d;
	d = strlen(a);
	for (int i = 0;i < d;i++)
	{
		*(c+i) = a[i] + b[i];
	}
	printf("\narray_sum\n");
}
struct complx {
	int real;
	int imagine;
};
struct complx complx_sum(struct complx x, struct complx y)
{
	struct complx A;
	A.real = x.real + y.real;
	A.imagine = x.imagine + y.imagine;
	return A;
}
int main()
{
	char A[] = "Hello World";
	char*a = A;
	rvs_1(A);
	rvs_2(a);
	rvs_3(a);
	printf("%s\n", A);
	//↑1번
	/*int C[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int D[10] = { 10,11,12,13,14,15,16,17,18,19 };
	int E[10];
	int*b = E;
	arr_sum(C, D, b);
	for (int i = 0;i < 10;i++)
	{
		printf("%d", E[i]);
	}*/
	//↑2번(못ㅋ함)
	struct complx p, q;
	printf("a+bi, 입력:(a b형식)\n");
	scanf("%d %d", &p.real, &p.imagine);
	printf("a+bi, 입력:(a b형식)\n");
	scanf("%d %d", &q.real, &q.imagine);
	printf("(%d+%di)+(%d+%di)=(%d)+(%di)", p.real, p.imagine, q.real, q.imagine, complx_sum(p, q));
	//↑3번
	return 0;
}