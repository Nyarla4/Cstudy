#include<stdio.h>
/*void prime(int a)
{
	int c = 0;
	for (int i = 1; i<a; i++)
	{
		if (a%i == 0)
		{
			c++;
		}
	}
	if (c == 1)
	{
		printf("%d ", a);
	}
}*/
//↑5번
/*int p = 0, m = 0, mp = 0, d = 0;
void plus(int a, int b)
{
	printf("%d+%d=%d\n", a, b, a + b);
	p++;
	if (p>0)
	{
		printf("덧셈은 %d번 호출되었다.\n", p);
	}
}
void minus(int a, int b)
{
	printf("%d-%d=%d\n", a, b, a - b);
	m++;
	if (m>0)
	{
		printf("뺄셈은 %d번 호출되었다.\n", m);
	}
}
void multip(int a, int b)
{
	printf("%d×%d=%d\n", a, b, a * b);
	mp++;
	if (mp>0)
	{
		printf("곱셈은 %d번 호출되었다.\n", mp);
	}
}
void divis(int a, int b)
{
	printf("%d÷%d=%d\n", a, b, a / b);
	d++;
	if (d>0)
	{
		printf("나눗셈은 %d번 호출되었다.\n", d);
	}
}*/
//↑10번
/*int save(int a)
{
	static int svn = 0;
	svn += a;
	return svn;
}
void draw(int svn,int a)
{
	svn -= a;
	if (svn != 0)
	{
		printf("현재까지 저축액:%d\n", svn);
	}
}*/
//↑11번
/*int arr_sum(int *a, int size)
{
	int n = 0;
	for (int i = 0; i<size; i++)
	{
		n += *(a + i);
	}
	return n;
}*/
//↑1번
/*void arr_rev(int *a,int siz)
{
	for(int i=siz-1;i>-1;i--)
	{
		printf("%d ",*(a+i));
	}
}*/
//↑2번
/*#include<math.h>
void quad(int a,int b, int c,double*p,double*m)
{
	*p = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	*m = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
}*/
//↑3번
int main()
{
	/*for (int i = 1; i <= 100; i++)
	{
		prime(i);
	}*/
	/*int n1 = 0, n2 = 0, c1 = 0;
	while (1)
	{
		printf("연산입력 : ");
		scanf("%d%c%d", &n1, &c1, &n2);
		switch (c1)
		{
		case'+':plus(n1, n2);
			break;
		case'-':minus(n1, n2);
			break;
		case'*':multip(n1, n2);
			break;
		case'/':divis(n1, n2);
			break;
		default:
			break;
		}
	}*/
	/*int n = 0;
	int m = 0;
	while (n != -1)
	{
		draw(save(n),m);
		printf("저축금액(종료:-1):");
		scanf("%d",&n);
		printf("인출금액:");
		scanf("%d", &m);
	}*/
	/*int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("합:%d\n", arr_sum(a, 10));*/
	/*int arr[5] = { 0 };
	printf("정수입력:\n");
	for (int i = 0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("역순:");
	arr_rev(arr, 5);*/
	/*int a = 0, b = 0, c = 0;
	double p = 0.0, m = 0.0;
	double *p_p = &p, *p_m = &m;
	printf("ax²+bx+c=0에서 순서대로 a,b,c값 입력(예시:1 2 3)\n");
	scanf("%d %d %d", &a, &b, &c);
	if ((b*b - 4 * a*c)<0||(2*a)==0)
	{
		printf("해가 없다\n");
	}
	else
	{
		quad(a, b, c, p_p, p_m);
		printf("실근은 %f와 %f\n", p, m);
	}*/
	return 0;
}