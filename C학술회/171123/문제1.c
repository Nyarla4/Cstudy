#include<stdio.h>
void rvs1(char A[])
{
	int a = strlen(A);
	char val[50];
	for (int i = a - 1; i >= 0; i--)
	{
		printf("%c", A[i]);
	}
	printf("\n");
}
void rvs2(char *A)
{
	int a = strlen(A);
	char val[50];
	for (int i = a - 1; i >= 0; i--)
	{
		printf("%c", *(A + i));
	}
	printf("\n");
}
char* rvs3(char *A)
{
	int n1 = strlen(A) - 1, n2 = 0;
	char temp = NULL;
	int i = n1 / 2;
	for (; i > 0; i--)
	{
		temp = A[n1];
		A[n1] = A[n2];
		A[n2] = temp;
		n2++;
		n1--;
	}
	return A;
}
int main()
{
	char A[] = "Hello World";
	char*a = A;
	rvs1(A);
	rvs2(a);
	printf("%s\n", rvs3(a));
	return 0;
}