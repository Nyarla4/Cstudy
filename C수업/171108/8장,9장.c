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
//��5��
/*int p = 0, m = 0, mp = 0, d = 0;
void plus(int a, int b)
{
	printf("%d+%d=%d\n", a, b, a + b);
	p++;
	if (p>0)
	{
		printf("������ %d�� ȣ��Ǿ���.\n", p);
	}
}
void minus(int a, int b)
{
	printf("%d-%d=%d\n", a, b, a - b);
	m++;
	if (m>0)
	{
		printf("������ %d�� ȣ��Ǿ���.\n", m);
	}
}
void multip(int a, int b)
{
	printf("%d��%d=%d\n", a, b, a * b);
	mp++;
	if (mp>0)
	{
		printf("������ %d�� ȣ��Ǿ���.\n", mp);
	}
}
void divis(int a, int b)
{
	printf("%d��%d=%d\n", a, b, a / b);
	d++;
	if (d>0)
	{
		printf("�������� %d�� ȣ��Ǿ���.\n", d);
	}
}*/
//��10��
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
		printf("������� �����:%d\n", svn);
	}
}*/
//��11��
/*int arr_sum(int *a, int size)
{
	int n = 0;
	for (int i = 0; i<size; i++)
	{
		n += *(a + i);
	}
	return n;
}*/
//��1��
/*void arr_rev(int *a,int siz)
{
	for(int i=siz-1;i>-1;i--)
	{
		printf("%d ",*(a+i));
	}
}*/
//��2��
/*#include<math.h>
void quad(int a,int b, int c,double*p,double*m)
{
	*p = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	*m = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
}*/
//��3��
int main()
{
	/*for (int i = 1; i <= 100; i++)
	{
		prime(i);
	}*/
	/*int n1 = 0, n2 = 0, c1 = 0;
	while (1)
	{
		printf("�����Է� : ");
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
		printf("����ݾ�(����:-1):");
		scanf("%d",&n);
		printf("����ݾ�:");
		scanf("%d", &m);
	}*/
	/*int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("��:%d\n", arr_sum(a, 10));*/
	/*int arr[5] = { 0 };
	printf("�����Է�:\n");
	for (int i = 0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("����:");
	arr_rev(arr, 5);*/
	/*int a = 0, b = 0, c = 0;
	double p = 0.0, m = 0.0;
	double *p_p = &p, *p_m = &m;
	printf("ax��+bx+c=0���� ������� a,b,c�� �Է�(����:1 2 3)\n");
	scanf("%d %d %d", &a, &b, &c);
	if ((b*b - 4 * a*c)<0||(2*a)==0)
	{
		printf("�ذ� ����\n");
	}
	else
	{
		quad(a, b, c, p_p, p_m);
		printf("�Ǳ��� %f�� %f\n", p, m);
	}*/
	return 0;
}